/*
 * FUN_005F6FA0 (269 B @ 0x5f6fa0) - __thiscall, RET 8. Performs a gameplay
 * update: dispatches through a vtable, calls FUN_005f70b0 twice with
 * descriptor args, and conditionally registers a node. (Block 0x5F6F16 is
 * 272 B; the last 3 bytes are 0x90 padding.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004da2f0(void);
extern void __cdecl FUN_006769c0(void);
extern void __cdecl FUN_005f70b0(void);
extern void __cdecl FUN_005f7200(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004da620(void);
extern int g_80da94;

__declspec(naked) void FUN_005F6FA0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jne     L_5f7098
        push    ebx
        push    edi
        push    ebp
        call    FUN_004da2f0
        mov     ecx, dword ptr [g_80da94]
        push    esi
        call    FUN_006769c0
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x178]
        test    eax, eax
        jl      L_5f7021
        cmp     eax, 4
        jg      L_5f7021
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, [esi + 0x16c]
        push    ecx
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x1c], eax
        push    edx
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_005f70b0
L_5f7021:
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, [esi + 0x16c]
        push    ecx
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x1c], eax
        push    edx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_005f70b0
        add     edi, 0x1c
        push    edi
        mov     ecx, esi
        call    FUN_005f7200
        mov     edi, eax
        test    edi, edi
        je      L_5f708c
        lea     ebx, [esi + 0x148]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jne     L_5f708c
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
L_5f708c:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xa0]
        pop     edi
        pop     ebx
L_5f7098:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_004da620
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret     8
    }
}
