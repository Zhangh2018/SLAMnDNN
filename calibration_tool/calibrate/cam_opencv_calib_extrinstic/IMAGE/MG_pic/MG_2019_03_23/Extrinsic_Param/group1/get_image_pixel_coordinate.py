import cv2

def mouse_listener(event, x, y, flags, param):
    if event == cv2.EVENT_MOUSEMOVE:
        tmp_img = img.copy()
        cv2.line(tmp_img, (x-1, y), (x-100, y), (0, 0, 255), 1)
        cv2.line(tmp_img, (x+1, y), (x+100, y), (0, 0, 255), 1)
        
        cv2.line(tmp_img, (x, y-1), (x, y-100), (0, 0, 255), 1)
        cv2.line(tmp_img, (x, y+1), (x, y+100), (0, 0, 255), 1)
        
        cv2.imshow("rightImage", tmp_img)
    elif event == cv2.EVENT_LBUTTONDOWN:
        global i
        i=i+1
        print("x:"+str(x))
        print("y:"+str(y))

	cv2.circle(img,(x,y),2,(255,0,0),1)        

        if(i%18 == 0):
            f1.write(str(x)+"\n")
            f2.write(str(y)+"\n")
        else:
            f1.write(str(x)+" ")
            f2.write(str(y)+" ")

i = 0
img = cv2.imread("right.bmp")
print(img.shape)
height, width = img.shape[:2]
cv2.namedWindow("rightImage",0)  
cv2.setMouseCallback("rightImage", mouse_listener)

f1 = open('right_x.txt', 'w')
f2 = open('right_y.txt', 'w')

#tmp_img = img.copy()
cv2.imshow("rightImage", img)

while (cv2.waitKey(100) != ord('q')):
    pass
cv2.destroyAllWindows()
f1.close
f2.close
