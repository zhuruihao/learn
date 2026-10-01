import cv2 as cv
import numpy as np
def main():
    im=cv.imread('lena.jpg')
    cv.imshow('lean.jpg',im)
    dim=(int(im.shape[1]*2),int(im.shape[0]*2))
    im_rs_nr=cv.resize(im,dim,interpolation=cv.INTER_NEAREST)
    im_rs_ln=cv.resize(im,dim,interpolation=cv.INTER_LINEAR)
    im_rs_cb=cv.resize(im,dim,interpolation=cv.INTER_CUBIC)
    im_rs_lz=cv.resize(im,dim,interpolation=cv.INTER_LANCZOS4)
    cv.imshow('lena_rs_nr.jpg',im_rs_nr)
    cv.imshow('lena_rs_ln.jpg',im_rs_ln)
    cv.imshow('lena_rs_cb.jpg',im_rs_cb)
    cv.imshow('lena_rs_lz.jpg',im_rs_lz)
    cv.waitKey()
    cv.destroyALLWindows()
if __name__=='__main__':
    main()
