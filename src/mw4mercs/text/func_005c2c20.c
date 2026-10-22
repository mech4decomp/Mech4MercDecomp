/*
 * FUN_005c2c20 (132 B) — __cdecl, 3 stack args. Recursive tree walker
 * that calls FUN_005cb330/FUN_005cb390/FUN_005cb340 then recurses on a
 * linked list at this+0x90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005cb330(void *a, void *b);
extern void __cdecl FUN_005cb390(int a, void *b);
extern void __cdecl FUN_005cb340(void *a, int b, void *c);

__declspec(naked) void func_005c2c20(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [esp + 0x28]
        push    esi
        mov     esi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esi + 0x6c]
        fld     dword ptr [esi + 0x5c]
        mov     ecx, dword ptr [esi + 0x7c]
        fstp    dword ptr [esp + 0x14]
        mov     edx, eax
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, ecx
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x1c], edx
        push    ecx
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], ebx
        call    FUN_005cb330
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005cb390
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, edi
        call    FUN_005cb340
        mov     esi, dword ptr [esi + 0x90]
        test    esi, esi
        jz      l_2c9d
    l_2c83:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      l_2c9d
        push    edi
        push    ebx
        push    eax
        call    func_005c2c20
        add     esp, 0xc
        // __emit: MSVC6 computes backward jmp displacement wrong (EB EA vs EB E6) when a call-reloc sits between branch and target
        __asm _emit 0xEB
        __asm _emit 0xE6
    l_2c9d:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
