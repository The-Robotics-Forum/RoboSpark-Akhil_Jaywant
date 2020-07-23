import cv2

image=cv2.imread("images/text.jpg",cv2.IMREAD_COLOR)
hsv=cv2.cvtColor(image,cv2.COLOR_RGB2HSV)
gray=cv2.cvtColor(image,cv2.COLOR_RGB2GRAY)

image2=cv2.resize(image,(300,600))
ret, thresh=cv2.threshold(gray,150,255,cv2.THRESH_BINARY)
ret1, thresh1=cv2.threshold(gray,150,255,cv2.THRESH_OTSU)
ret2,thresh2=cv2.threshold(gray,150,255,cv2.THRESH_BINARY_INV)
ret3,thresh3=cv2.threshold(gray,150,255,cv2.THRESH_MASK)

adp_thresh=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,3)



print("The shape of old image :",image.shape)
print("The size of old image :",image.size)
print("The shape of new image :",image2.shape)
print("The size of new image :",image2.size)
cv2.imshow("Binary thresh",thresh)
cv2.imshow("Color image",image)
cv2.imshow("Resized image",image2)
cv2.imshow("Hsv image",hsv)
cv2.imshow("Gray image",gray)
cv2.imshow("Thresh binary",thresh)
cv2.imshow("Thresh binary inversion", thresh2)
cv2.imshow("Thresh otsu",thresh1)
cv2.imshow("Thresh mask",thresh3)
cv2.imshow("Adaptive threshold",adp_thresh)
cv2.imwrite("images/hsv.jpg",hsv)
cv2.imwrite("images/gray.jpg",gray)
cv2.imwrite("images/thresh binary.jpg",thresh)
cv2.imwrite("images/thresh binary inv.jpg",thresh2)
cv2.imwrite("images/thresh otsu.jpg",thresh1)
cv2.imwrite("images/adaptive threshold.jpg",adp_thresh)



cv2.waitKey(0)
cv2.destroyAllWindows()