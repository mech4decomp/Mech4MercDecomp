/*
 * FUN_006a0530 (50 B) - __thiscall. Reads this->0, pushes three pointers
 * (obj+4, obj+8, obj+0xc) plus the stack param into FUN_00410500; if it
 * returns non-NULL, frees it via FUN_004084e0. Decrements this->4.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00410500(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_006a0530(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        lea     ecx, [eax + 0xc]
        push    ecx
        lea     edx, [eax + 0x8]
        push    edx
        add     eax, 0x4
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_00410500
        add     esp, 0x10
        test    eax, eax
        jz      L_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_done:
        dec     dword ptr [esi + 0x4]
        pop     esi
        ret     4
    }
}
