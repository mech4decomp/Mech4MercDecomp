/*
 * FUN_004fcb50 (61 B) — __thiscall, RET 0x4: MLR/Adept helper that resolves
 * a packed record id (type<<24 | index) to a record, releases the old
 * sub-object, and links a new one.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void FUN_004fcb50(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x30]
        cmp     eax, -0x1
        jz      L_fcb89
        mov     edx, eax
        and     eax, 0xffffff
        push    esi
        lea     esi, [eax*8 + 0x0]
        sar     edx, 0x18
        sub     esi, eax
        mov     eax, dword ptr [ecx + edx*8 + 0x10]
        mov     esi, dword ptr [eax + esi*4 + 0x14]
        mov     ecx, esi
        call    FUN_0041fcb0
        push    edi
        mov     ecx, esi
        call    FUN_0041fcd0
        pop     esi
    L_fcb89:
        pop     edi
        ret     0x4
    }
}
