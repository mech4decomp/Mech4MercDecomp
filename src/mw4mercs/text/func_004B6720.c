/*
 * FUN_004B6720 (87 B) — __thiscall (3 stack args, RET 0xC). Builds a stack
 * struct via FUN_0048BCF0, fills it with fields from [this+0x144] and a
 * 6-dword copy from arg3, then calls FUN_0048E890 with it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048BCF0(void);
extern void __cdecl FUN_0048E890(void);

__declspec(naked) void FUN_004B6720(void)
{
    __asm {
        sub     esp, 0x24
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 8]
        call    FUN_0048BCF0
        mov     eax, dword ptr [esi + 0x144]
        mov     edx, dword ptr [esp + 0x30]
        add     esi, 0x80
        mov     dword ptr [esp + 0x28], esi
        mov     esi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 8], eax
        mov     dword ptr [esp + 0x24], 0x2f
        mov     ecx, 6
        lea     edi, [esp + 0xc]
        rep movsd
        lea     ecx, [esp + 8]
        push    ecx
        mov     ecx, dword ptr [edx + 0x26c]
        call    FUN_0048E890
        pop     edi
        pop     esi
        add     esp, 0x24
        ret     0xc
    }
}
