"""Take the any one of the images from the 'Day 2->Task image' folder of the drive link you've been provided.
Apply all the blurring techniques (filter2D, averaging, gaussian blur, median blur and bilateral filter) to the
 original image or the masked image, whichever you want. Save the outputs and draw a flowerpot for the flower on
 any of the output image. Also write the name of the flower on the image. While submitting the task, you should submit
  1 masked image, 5 output images of blurring, 1 output of drawing and text on image, and the codes."""

import cv2
import numpy as np


img = cv2.imread(r"D:\TRF\Image Processing\24-07\task\rose_flower.jpg")
cv2.imshow("Original Image", img)

"""----Blurring----"""
kernel = np.array(([0, 0, 0], [0, 1, 1], [0, 0, 0]), np.uint8)
blurred = cv2.filter2D(img, -1, kernel)
avg = cv2.blur(img, (7, 7))
gaus = cv2.GaussianBlur(img, (5, 5), 0)
median = cv2.medianBlur(img, 7)
bilateral = cv2.bilateralFilter(img, 7, 150, 150)


cv2.imshow("Filter 2D", blurred)
cv2.imshow("Average Blur", avg)
cv2.imshow("Gaussian Blur", gaus)
cv2.imshow("Median Blur", median)
cv2.imshow("Bilateral Filter", bilateral)
cv2.imwrite("D:\\TRF\\Image Processing\\24-07\\task\\filter_2D.jpg", blurred)
cv2.imwrite("D:\\TRF\\Image Processing\\24-07\\task\\average.jpg", avg)
cv2.imwrite("D:\\TRF\\Image Processing\\24-07\\task\\gaussian.jpg", gaus)
cv2.imwrite("D:\\TRF\\Image Processing\\24-07\\task\\median.jpg", median)
cv2.imwrite("D:\\TRF\\Image Processing\\24-07\\task\\bilateral.jpg", bilateral)


"""----Masking----"""
bgrl = np.array([0, 20, 180], np.uint8)
bgrh = np.array([255, 145, 255], np.uint8)
hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)
mask = cv2.inRange(img , bgrl, bgrh)

cv2.imshow("Masked", mask)
cv2.imwrite("D:\\TRF\\Image Processing\\24-07\\task\\masked.jpg", mask)

"""----Drawing & Text----"""
h, w, c = img.shape
print(h, w, c)

points = np.array([[(80, 400), (20, 515), (80, 790), (180, 790), (240, 515), (180, 400) ]])
img1 = cv2.fillConvexPoly(img, points, (0, 0, 0))
img1 = cv2.ellipse(img1, (130, 515), (110, 20), 0, 0, 180, (0, 140, 255), 5)


font = cv2.FONT_HERSHEY_TRIPLEX
cv2.putText(img1, 'Rose', (400, 30), font, 1, (0, 0, 0), 2, cv2.LINE_AA)

cv2.imshow("Shapes", img1)
cv2.imwrite("D:\\TRF\\Image Processing\\24-07\\task\\shapes.jpg", img1)

cv2.waitKey(0)
cv2.destroyAllWindows()