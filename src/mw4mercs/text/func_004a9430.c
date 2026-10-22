/*
 * FUN_004a9430 (163 B) — MLR ShardCloud sub-object registry re-init
 * (__thiscall, RET 0x4). Calls base FUN_004ab820, re-registers callbacks
 * (FUN_004add70/FUN_004addb0), and re-wires several virtual property
 * getters via the param_1 vtable (+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ab820(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004addb0(void);
extern void __cdecl FUN_004ae560(void);

__declspec(naked) void FUN_004a9430(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_004ab820
        push    esi
        lea     ecx, [edi + 0x278]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x280]
        call    FUN_004addb0
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi + 0x28c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0x294]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x2a0]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2ac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2b0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [edi + 0x2b2]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [edi + 0x2b3]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        add     edi, 0x2b1
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
