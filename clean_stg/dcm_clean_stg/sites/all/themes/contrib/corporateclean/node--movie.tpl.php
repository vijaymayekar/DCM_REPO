<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted"><?php print $submitted ?></div>
  <?php endif; ?>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      // print render($content);
    ?>
  </div>


  <div id="divMovie">
    <section>
      <div>
        <div id="divMoviePanel">
          <div id="divMovieDet" class="movie-holder clearfix">
            <div id="mvHoldr">
              <div class="movie-img">
                  <?php print render($content['field_movie_image']); ?>
              </div>
              <section class="movie-content">
                <div class="movie-synopsys"><?php print render($content['body']); ?></div>
                <div class="mvStr">
                  <ul>
                    <li>
                      <p>Release Date :</p><?php print render($content['field_release_date']); ?>
                    </li>
                    <li>
                      <p>Language :</p><?php print render($content['field_language']); ?>
                    </li>
                    <li>
                      <p>Genre :</p><?php print render($content['field_genre']); ?>
                    </li>
                  </ul>
                </div>

              </section>

            </div>
          </div>


        </div>
      </div>
    </section>
  </div>








  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <div class="links"><?php print render($content['links']); ?></div>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>

</div>
