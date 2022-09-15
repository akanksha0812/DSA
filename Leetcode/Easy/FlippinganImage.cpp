        for(int i=0;i<image.size();i++){
            vector<int>img=image[i];
            reverse(img.begin(),img.end());
            image[i]=img;
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                if(image[i][j]==1){
                    image[i][j]=0;
                }else{
                    image[i][j]=1;
                }
            }
        }
        return image;