/*
 * FUN_005bebb0 (90 B) - __thiscall, RET 0x10 (4 stack params).
 *
 * Calls FUN_0067dc50 if this+0x92c set, FUN_0067eb10 if this+0x930 set,
 * then formats a "Player_Respawn" string and logs it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0067dc50(void *this, void *a, void *b, void *c, void *d);
extern void __fastcall FUN_0067eb10(void *this, void *p);
extern void *__cdecl FUN_00563550(const char *fmt, void *p);
extern void __cdecl FUN_00563c80(void *p);

__declspec(naked) void __fastcall FUN_005bebb0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x92c]
        test    ecx, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        jz      skip1
        mov     edx, dword ptr [esp + 0x10]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x24]
        push    edi
        mov     dword ptr [eax + 0x8], edx
        call    FUN_0067dc50
skip1:
        mov     ecx, dword ptr [esi + 0x930]
        test    ecx, ecx
        jz      skip2
        push    edi
        call    FUN_0067eb10
skip2:
        push    edi
        push    0x7871ec
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     0x10
    }
}
