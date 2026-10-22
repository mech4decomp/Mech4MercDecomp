/*
 * FUN_004ACD90 (120 B) — __thiscall (this in ECX), RET 0x4 (1 param).
 * Jump-table dispatcher on [ecx] (value-4, 8 cases) that stores a byte
 * arg into one of several fields (0x18/0x1c/0x20/0x24/0x2c). Jump table
 * at 0x4ACDE8 (8 relocated dwords) reproduced as literal bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004ACD90(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        add     eax, -4
        cmp     eax, 7
        ja      L_4acde4
        jmp     dword ptr [eax*4 + 0x4acde8]
    L_4acda1:
        mov     al, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x1c], al
        ret     4
    L_4acdab:
        mov     dl, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x1c], dl
        ret     4
    L_4acdb5:
        mov     dl, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x18], dl
        ret     4
    L_4acdbf:
        mov     al, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x18], al
        ret     4
    L_4acdc9:
        mov     dl, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x20], dl
        ret     4
    L_4acdd3:
        mov     al, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x24], al
        ret     4
    L_4acddd:
        mov     dl, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x2c], dl
    L_4acde4:
        ret     4
        nop
        /* jump-table data @ 0x4ACDE8 (8 relocated dwords, literal bytes) */
        __emit 0xA1  /* 0x004ACDA1 */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
        __emit 0xAB  /* 0x004ACDAB */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
        __emit 0xD3  /* 0x004ACDD3 */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
        __emit 0xB5  /* 0x004ACDB5 */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
        __emit 0xBF  /* 0x004ACDBF */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
        __emit 0xC9  /* 0x004ACDC9 */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
        __emit 0xD3  /* 0x004ACDD3 */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
        __emit 0xDD  /* 0x004ACDDD */
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
    }
}
