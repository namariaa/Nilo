import IconButton from "@mui/material/IconButton";
import ImageListItem from "@mui/material/ImageListItem";
import ImageListItemBar from "@mui/material/ImageListItemBar";
import InfoIcon from '@mui/icons-material/Info';
import Image from "next/image";

interface Image {
    title: string;
    font: string;
    img: string;
}

export default function Images (props: Image): React.ReactNode {
    const {title,font,img} = props;
    return (
        <ImageListItem key={img}>
          <Image
            src={img}
            alt={title}
            loading="lazy"
          />
          <ImageListItemBar
            title={title}
            subtitle={font}
            actionIcon={
              <IconButton
                sx={{ color: 'rgba(255, 255, 255, 0.54)' }}
                aria-label={`info about ${title}`}
              >
                <InfoIcon />
              </IconButton>
            }
          />
        </ImageListItem>
    )
}