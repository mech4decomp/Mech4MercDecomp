/*
 * FUN_005ffb30 (104 B) — __thiscall. Builds a stack object, calls
 * FUN_005ff840 / FUN_00602c40 / FUN_00602f80, then stores results into
 * the object at [ESI+8]/[ESI+0xc] and the caller buffer at [EAX].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ff840(void);
extern void __cdecl FUN_00602c40(void);
extern void __cdecl FUN_00602f80(void);

__declspec(naked) void FUN_005ffb30(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp+0x20]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x24]
        sub     esp, 0x8
        mov     eax, esp
        mov     dword ptr [eax], edi
        mov     dword ptr [eax+0x4], ebx
        lea     eax, [esp+0x14]
        mov     esi, ecx
        push    eax
        call    FUN_005ff840
        sub     esp, 0x8
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        sub     esp, 0x8
        lea     edx, [esp+0x44]
        mov     ecx, esp
        push    edx
        call    FUN_00602c40
        lea     eax, [esp+0x2c]
        push    eax
        call    FUN_00602f80
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax+0x4]
        mov     eax, dword ptr [esp+0x3c]
        add     esp, 0x1c
        mov     dword ptr [eax], edi
        mov     dword ptr [esi+0x8], ecx
        pop     edi
        mov     dword ptr [esi+0xc], edx
        pop     esi
        mov     dword ptr [eax+0x4], ebx
        pop     ebx
        add     esp, 0x10
        ret     0x14
    }
}
