from cv2 import cv2

jpg1 = cv2.imread("test.jpg")
cv2.imshow("test", jpg1)
cv2.waitKey(0)
cv2.destroyAllWindows()