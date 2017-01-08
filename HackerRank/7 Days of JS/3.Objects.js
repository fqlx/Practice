function displayInformation() 
{
    for (var x = 0; x < library.length; x++)
    {
      if (library[x].readingStatus)
      {
            console.log("Already read '"+library[x].title+"' by "+library[x].author+".");
        } else {
            console.log("You still need to read '"+library[x].title+"' by "+library[x].author+".");
        }
    }
} 

// tail starts here
var library = [ 
    {
        title: 'Bill Gates',
        author: 'The Road Ahead',
        readingStatus: true
    },
    {
        title: 'Steve Jobs',
        author: 'Walter Isaacson',
        readingStatus: true
    },
    {
        title: 'Mockingjay: The Final Book of The Hunger Games',
        author: 'Suzanne Collins',
        readingStatus: false
    }
];

displayInformation();
