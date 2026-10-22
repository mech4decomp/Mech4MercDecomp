/*
 * FUN_004BBFB0 (90 B) — __thiscall (3 stack args, RET 0xC). Builds a stack
 * struct via FUN_0048BCF0, fills it with fields from [this+0x144], a masked
 * arg, and a 6-dword copy from arg2, then calls FUN_0048E890 with it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048BCF0(void);
extern void __cdecl FUN_0048E890(void);

__declspec(naked) void FUN_004BBFB0(void)
{
    __asm {
        sub     esp, 0x24
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 8]
        call    FUN_0048BCF0
        mov     eax, dword ptr [esi + 0x144]
        mov     ecx, dword ptr [esp + 0x38]
        and     ecx, 0x3f
        add     esi, 0x80
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x28], esi
        mov     esi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 8], eax
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, 6
        lea     edi, [esp + 0xc]
        lea     edx, [esp + 8]
        rep movsd
        mov     ecx, dword ptr [eax + 0x26c]
        push    edx
        call    FUN_0048E890
        pop     edi
        pop     esi
        add     esp, 0x24
        ret     0xc
    }
}
