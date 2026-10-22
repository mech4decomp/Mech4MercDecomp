/*
 * FUN_005a3e70 (59 B) — Object constructor.
 *
 * __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f35f0(void);
extern int __fastcall FUN_005f5670(void);
extern int __fastcall FUN_005a3f10(void);

__declspec(naked) void * __fastcall FUN_005a3e70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005f35f0
        mov     ecx, esi
        mov     dword ptr [esi], 0x7841bc
        call    FUN_005f5670
        push    edi
        mov     ecx, esi
        call    FUN_005a3f10
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
