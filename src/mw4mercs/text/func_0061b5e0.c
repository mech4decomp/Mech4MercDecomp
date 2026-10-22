/*
 * FUN_0061b5e0 (280 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Serializes a set of sub-objects into a stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041de80(int a, int b);
extern void __cdecl FUN_0041e130(void *p, int n);
extern void __cdecl FUN_00412a50(void *a, void *b);
extern void __cdecl FUN_0041dec0(void);

__declspec(naked) void __stdcall FUN_0061b5e0(void *param)
{
    __asm {
        sub     esp, 0x34
        mov     eax, dword ptr [esp + 0x38]
        push    esi
        push    edi
        push    0x1
        mov     esi, ecx
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0041de80
        push    0x4
        lea     ecx, [esp + 0xC]
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x10], 0xaaaaaaaa
        call    FUN_0041e130
        lea     edx, [esi + 0x5BDC]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_00412a50
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 0x8
        push    0xC
        lea     ecx, [esi + 0x5BE0]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0xC
        lea     ecx, [esi + 0x5BEC]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        push    0x4
        lea     edx, [esi + 0x20]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_0041e130
        push    0x4
        lea     eax, [esi + 0x18]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0041e130
        mov     edi, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [edi + 0x18]
        sub     ecx, eax
        push    0x4
        lea     edx, [esp + 0x44]
        mov     dword ptr [esp + 0x44], ecx
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_0041e130
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        jle     L_b6a6
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi + 0x18]
        mov     edx, dword ptr [edi]
        sub     eax, ecx
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0041e130
L_b6a6:
        mov     esi, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x18]
        sub     eax, ecx
        push    0x4
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x48], eax
        call    FUN_0041e130
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        jle     L_b6e7
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi + 0x18]
        sub     edx, eax
        mov     eax, dword ptr [esi]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0041e130
L_b6e7:
        lea     ecx, [esp + 0xC]
        call    FUN_0041dec0
        pop     edi
        pop     esi
        add     esp, 0x34
        ret     0x4
    }
}
