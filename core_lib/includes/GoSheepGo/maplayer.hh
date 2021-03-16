template <typename T>
class Maplayer {
    public:
    Maplayer( gridpt mapshape ) {
        init(mapshape);
    }

    std::vector <T> m_vector;        
    std::vector <T>::iterator m_iterator;
    gridpt m_shape;

    void init(gridpt mapshape) {
        m_shape = mapshape;

            for (int x; x < m_shape.x; x++) {
                for (int y; y < m_shape.y; y++) {

                    gridpt tile_number;
                    tile_number.x = x;
                    tile_number.y = y;

                    sizept tile_size;                
                    tile_size.x = single_tile_size.x;
                    tile_size.y = single_tile_size.y;

            
                    m_tile_vector.push_back( Tile(
                        tile_number, 
                        tile_size,
                        g_grass.m_ptr,
                        g_grass_sel.m_ptr,
                        dest_window_surf
                    ));
                }
            }
    }

    void update() {
        for (
            m_iterator = m_vector.begin(); 
            m_iterator != m_vector.end(); 
            m_iterator++
        ) {
            m_iterator -> update();
        }
    }

    void draw() {
        for (
            m_iterator = m_vector.begin(); 
            m_iterator != m_vector.end(); 
            m_iterator++
        ) {
            m_iterator -> draw();
        }
    }
};