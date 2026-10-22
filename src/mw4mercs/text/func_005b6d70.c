/*
 * FUN_005b6d70 (179 B) — __cdecl, 2 params.
 *
 * Reads global [0x007f210c], calls FUN_004e6d10(param_1,param_2,ecx),
 * then 5 times: FUN_00411cb0(string, &local, 0) [__thiscall on param_2]
 * followed by a virtual call (vtable+0x24) on param_1 with (&local, 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e6d10(void *a, void *b, void *c);
extern void FUN_00411cb0(void);

__declspec(naked) void __cdecl FUN_005b6d70(void *param_1, void *param_2)
{
    

extern int DAT_007f210c;
__asm {
        mov eax, dword ptr [DAT_007f210c]
        mov     ecx, dword ptr [eax]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    ecx
        push    edi
        push    esi
        call    FUN_004e6d10
        add     esp, 0xc
        xor     ebx, ebx
        push    ebx
        lea     edx, [esp + 0x18]
        push    edx
        push    0x786830
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x18]
        push    edx
        push    0x786820
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x18]
        push    edx
        push    0x786814
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x18]
        push    edx
        push    0x786808
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}
