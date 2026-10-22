/*
 * FUN_006C9210 — texture_get_pixel: reads a 32-bit pixel from a texture surface.
 *
 * __thiscall (ECX = this, texture object).
 *   [ESP+4] = x coordinate
 *   [ESP+8] = y coordinate
 *   RET 0x8
 *   Returns: 32-bit pixel value (ARGB).
 *
 * Calls FUN_006C8E20 (4-byte thunk: mov eax,[ecx+0x14]; ret) to get the
 * pixel data base pointer from this->field_14.
 *
 * CFLAGS: /O1 (pinned)
 * Match: 100%
 */

#include <mw4/common.h>

/* FUN_006c8e20 — __thiscall, returns this->field_14 (pixel data pointer).
 *   ECX = this
 *   Returns: pixel data base address in EAX. */
extern int __stdcall texture_get_pixels(void);

__declspec(naked) int __stdcall texture_get_pixel(int x, int y)
{
    __asm {
        push    esi
        mov     esi, ecx                    /* ESI = this */
        call    texture_get_pixels          /* FUN_006c8e20: EAX = this->field_14 */
        mov     ecx, [esi + 0x0c]           /* ECX = this->pitch */
        imul    ecx, [esp + 0x0c]           /* ECX = pitch * y */
        mov     edx, [esp + 0x08]           /* EDX = x */
        add     eax, ecx                    /* EAX = base + pitch*y */
        lea     ecx, [eax + edx*4]          /* ECX = &pixel (base + pitch*y + x*4) */
        xor     eax, eax
        mov     al, [ecx + 3]               /* AL = byte 3 (A) */
        xor     edx, edx
        mov     dl, [ecx + 2]               /* DL = byte 2 (R) */
        pop     esi
        shl     eax, 8                      /* shift A left 8 */
        add     eax, edx                    /* EAX = (A<<8) | R */
        xor     edx, edx
        mov     dl, [ecx + 1]               /* DL = byte 1 (G) */
        shl     eax, 8                      /* shift left 8 */
        add     eax, edx                    /* EAX = (A<<16) | (R<<8) | G */
        xor     edx, edx
        mov     dl, [ecx]                   /* DL = byte 0 (B) */
        shl     eax, 8                      /* shift left 8 */
        add     eax, edx                    /* EAX = (A<<24) | (R<<16) | (G<<8) | B */
        ret     0x8
    }
}
