/*
 * FUN_006217c0 (332 B) — __thiscall (ECX = this), RET 0x4 (one stack param).
 *
 * Appends param_1 into several growable arrays on `this` (at offsets 0x4,
 * and indexed by param_1[4]+2), records an index, and walks a sub-object
 * list via FUN_00624f90 / FUN_00621910, calling a chain of helper methods
 * (FUN_00624850, FUN_004ea0f0, FUN_006249f0, FUN_006247c0, FUN_00624880,
 * FUN_006247a0, FUN_00624870) to build the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00547fd0(void);
extern void __cdecl FUN_00624f90(void);
extern void __cdecl FUN_00621910(void);
extern void __cdecl FUN_00624850(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_006249f0(void);
extern void __cdecl FUN_006247c0(void);
extern void __cdecl FUN_00624880(void);
extern void __cdecl FUN_006247a0(void);
extern void __cdecl FUN_00624870(void);

__declspec(naked) void __stdcall FUN_006217c0(void)
{
    __asm {
        sub     esp, 0x2c
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        mov     ebx, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x8]
        push    edi
        mov     edi, eax
        sub     edi, ebx
        sar     edi, 0x2
        cmp     eax, ecx
        jz      L_217ED
        test    eax, eax
        jz      L_217E5
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [eax], ecx
L_217E5:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     L_217FC
L_217ED:
        push    0x1
        lea     edx, [esp + 0x40]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00547fd0
L_217FC:
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edx + 0x4]
        add     eax, 0x2
        lea     eax, [eax + eax*0x2]
        mov     ebx, dword ptr [esi + eax*0x4 + 0x8]
        lea     ecx, [esi + eax*0x4]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, ebx
        jz      L_21825
        test    eax, eax
        jz      L_2181D
        mov     dword ptr [eax], edx
L_2181D:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     L_21832
L_21825:
        push    0x1
        lea     edx, [esp + 0x40]
        push    edx
        push    eax
        call    FUN_00547fd0
L_21832:
        mov     eax, dword ptr [esp + 0x3c]
        mov     dword ptr [eax + 0x14], edi
        mov     ecx, dword ptr [esp + 0x3c]
        lea     ebx, [ecx + 0x18]
        push    ebx
        lea     edx, [esp + 0x18]
        add     esi, 0x2a0
        push    edx
        mov     ecx, esi
        call    FUN_00624f90
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x10], eax
        jz      L_2186C
        add     eax, 0x10
        push    eax
        mov     ecx, ebx
        call    FUN_00621910
        test    al, al
        jz      L_218C8
L_2186C:
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00624850
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    FUN_004ea0f0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_006249f0
        lea     edx, [esp + 0x28]
        push    edx
        push    ecx
        lea     eax, [esp + 0x18]
        mov     ecx, esp
        push    eax
        call    FUN_006247c0
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    FUN_00624880
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x10], edx
        call    FUN_006247a0
        lea     ecx, [esp + 0x1c]
        call    FUN_00624870
L_218C8:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [eax + 0x14]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, edx
        jz      L_218F4
        test    eax, eax
        jz      L_218E3
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [eax], edx
L_218E3:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x2c
        ret     0x4
L_218F4:
        push    0x1
        lea     edx, [esp + 0x40]
        push    edx
        push    eax
        call    FUN_00547fd0
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x2c
        ret     0x4
    }
}
