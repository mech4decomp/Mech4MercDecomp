/*
 * FUN_005C5780 (293 B @ 0x5C5780) - __thiscall (ECX = this), RET 4. Gameplay
 * update routine: reads globals 0x7F2460 / 0x7B220C, calls 0x6F4950 /
 * 0x41C540, then appends entries to two growable arrays (this->[0x4F0] and
 * this->[0x170]-derived), using FPU float math (fadd 0x7704C4) and helper
 * 0x5CB540. Epilogue via 0x6F49A0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   dword_7F2460;
extern void  __cdecl FUN_006F4950(void);
extern int   dword_7B220C;
extern void  __cdecl FUN_0041C540(void);
extern float g_7704C4;
extern void  __cdecl FUN_005CB540(void);
extern void  __cdecl FUN_006F49A0(void);

__declspec(naked) void FUN_005C5780(void)
{
    __asm {
        sub     esp, 0x24
        mov     eax, dword ptr [dword_7F2460]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006F4950
        mov     ecx, dword ptr [dword_7B220C]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     edi, [esi + 0x4f0]
        push    edi
        mov     dword ptr [esp + 0x2c], 0
        mov     dword ptr [esp + 0x30], 0
        mov     dword ptr [esp + 0x34], 0
        call    FUN_0041C540
        add     esp, 0xc
        test    al, al
        jne     L_5C5898
        mov     eax, dword ptr [esi + 0x170]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     esi, dword ptr [esp + 0x30]
        add     eax, 0x80
        mov     dword ptr [esp + 8], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [esi + 8]
        mov     dword ptr [esp + 0xc], edx
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax + 0x2c]
        fadd    dword ptr [g_7704C4]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esi + 4]
        cmp     eax, ecx
        fstp    dword ptr [esp + 0xc]
        je      L_5C5832
        test    eax, eax
        je      L_5C582A
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 4], edx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 8], ecx
L_5C582A:
        add     eax, 0xc
        mov     dword ptr [esi + 4], eax
        jmp     L_5C5841
L_5C5832:
        push    1
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005CB540
L_5C5841:
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi + 8]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x1c], ecx
        cmp     eax, dword ptr [esi + 8]
        mov     dword ptr [esp + 0x18], edx
        je      L_5C5889
        test    eax, eax
        je      L_5C5876
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 4], edx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 8], ecx
L_5C5876:
        add     eax, 0xc
        mov     dword ptr [esi + 4], eax
        call    FUN_006F49A0
        pop     edi
        pop     esi
        add     esp, 0x24
        ret     4
L_5C5889:
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005CB540
L_5C5898:
        call    FUN_006F49A0
        pop     edi
        pop     esi
        add     esp, 0x24
        ret     4
    }
}
