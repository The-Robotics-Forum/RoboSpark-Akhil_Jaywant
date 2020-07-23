"""We have to read a given image then after that convert that image in gray scale and hsv using cvtColor function
 then resize the original image and prints it old and new shape and size then after that on grayscale image apply
  all the thresholding methods and then save all the image - gray ,hsv and four of thresholding"""

import cv2

img = cv2.imread(r"D:\TRF\Image Processing\task_23-07\task.jpg",  -1)
cv2.imshow("original", img)

"""----Converting into Grayscale and HSV----"""
img1 = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
cv2.imshow("Grayscale", img1)

img2 = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)
cv2.imshow("HSV", img2)

cv2.imwrite("D:\\TRF\\Image Processing\\task_23-07\\grayscale.jpg", img1)
cv2.imwrite("D:\\TRF\\Image Processing\\task_23-07\\hsv.jpg", img2)

"""----Resizing----"""
img_resize = cv2.resize(img, (500, 600))
cv2.imshow("Resized", img_resize)

cv2.imwrite("D:\\TRF\\Image Processing\\task_23-07\\resized.jpg", img_resize)

h, w, c = img.shape
print("Original Image \nHeight: ", h,"\t Width: ", w, "\tNumber of channels:", c)
h, w, c = img_resize.shape
print("Resized Image \nHeight: ", h, "\t Width: ", w, "\tNumber of channels:", c)

print("Size of original image: ", img.size)
print("Size of resized image: ", img_resize.size)

"""----Thresholding----"""
img1 = cv2.resize(img1, (400, 500))

ret, thresh = cv2.threshold(img1, 135, 255, cv2.THRESH_BINARY)
cv2.imshow('Threshold_BIN image', thresh)
cv2.imwrite("D:\\TRF\\Image Processing\\task_23-07\\th_bin.jpg", thresh)

ret, thresh2 = cv2.threshold(img1, 135, 255, cv2.THRESH_BINARY_INV)
cv2.imshow('Threshold_BININV image', thresh2)
cv2.imwrite("D:\\TRF\\Image Processing\\task_23-07\\th_bin_inv.jpg", thresh2)

adm_threshold = cv2.adaptiveThreshold(img1, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 5, 7)
cv2.imshow('Adaptive-Mean', adm_threshold)
cv2.imwrite("D:\\TRF\\Image Processing\\task_23-07\\th_adm.jpg", adm_threshold)

adg_threshold = cv2.adaptiveThreshold(img1, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 5, 5)
cv2.imshow('Adaptive-Gaussian', adg_threshold)
cv2.imwrite("D:\\TRF\\Image Processing\\task_23-07\\th_adg.jpg", adg_threshold)


cv2.waitKey(0)
cv2.destroyAllWindows()


