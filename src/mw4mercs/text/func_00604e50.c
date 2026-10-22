/*
 * FUN_00604e50 (220 B) — __cdecl. Initializes a set of 9 float-vector
 * objects (at 0x7f26c8..0x7f2748) by calling FUN_00604dd0 (ECX = this)
 * with 4 float args each. Pure push/call sequence.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00604dd0(void);

__declspec(naked) void FUN_00604e50(void)
{
    __asm {
        push    0x0
        push    0xc0800000
        push    0x40800000
        push    0x0
        mov     ecx, 0x7f2748
        call    FUN_00604dd0
        push    0x3f800000
        push    0x0
        push    0x0
        push    0x0
        mov     ecx, 0x7f2738
        call    FUN_00604dd0
        push    0x3f800000
        push    0x40000000
        push    0x0
        push    0x0
        mov     ecx, 0x7f2728
        call    FUN_00604dd0
        push    0x3f800000
        push    0x40900000
        push    0x3f4ccccd
        push    0x0
        mov     ecx, 0x7f2718
        call    FUN_00604dd0
        push    0x3f800000
        push    0x0
        push    0xbe800000
        push    0x0
        mov     ecx, 0x7f2708
        call    FUN_00604dd0
        push    0x3f800000
        push    0x40400000
        push    0x0
        push    0x0
        mov     ecx, 0x7f26f8
        call    FUN_00604dd0
        push    0x3f800000
        push    0x0
        push    0x404ccccd
        push    0x0
        mov     ecx, 0x7f26e8
        call    FUN_00604dd0
        push    0x3f800000
        push    0x3f800000
        push    0x40000000
        push    0x0
        mov     ecx, 0x7f26d8
        call    FUN_00604dd0
        push    0x3f800000
        push    0x3f800000
        push    0x0
        push    0x0
        mov     ecx, 0x7f26c8
        call    FUN_00604dd0
        ret
    }
}
