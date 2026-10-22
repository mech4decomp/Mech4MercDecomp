/*
 * FUN_004fcb90 (70 B) — __thiscall, RET 0x8: MLR/Adept helper that resolves
 * a packed record id (type<<24 | index) to a record, releases the old
 * sub-object, and links a new one (with an extra argument).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void FUN_004fcb90(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        cmp     edx, -0x1
        push    esi
        jz      L_fcbd2
        mov     eax, edx
        sar     eax, 0x18
        and     edx, 0xffffff
        cmp     eax, 0x12
        jge     L_fcbd2
        mov     eax, dword ptr [ecx + eax*8 + 0x10]
        lea     esi, [edx*8 + 0x0]
        sub     esi, edx
        mov     esi, dword ptr [eax + esi*4 + 0x14]
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_fcbd2
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
    L_fcbd2:
        pop     esi
        ret     0x8
    }
}
