/*
 * FUN_1002f920 (273 B) — __fastcall (ECX = param_1).
 * Destructor: tears down a list object, releases sub-objects, resets vtables.
 *
 * CFLAGS: /O1
 */

extern int *g_10049200;
extern void __cdecl FUN_10001d60(void);
extern void __stdcall FUN_100302e0(void);

__declspec(naked) void __fastcall FUN_1002f920(void)
{
    __asm {
        push    -0x1
        push    0x100488fb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esi], 0x1004aeb8
        mov     dword ptr [esi + 0x4], 0x1004aeb0
        mov     dword ptr [esi + 0x8], 0x1004aeac
        mov     eax, dword ptr [esi + 0x24]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [esp + 0x1c], ebp
        jbe     L_f99d
    L_f961:
        mov     eax, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x8]
        cmp     ecx, ebp
        jz      L_f973
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_f973:
        mov     eax, dword ptr [esi + 0x20]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        push    eax
        mov     dword ptr [ecx + 0x4], edx
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x24]
        add     esp, 0x4
        dec     ecx
        mov     eax, ecx
        cmp     eax, ebp
        mov     dword ptr [esi + 0x24], ecx
        ja      L_f961
    L_f99d:
        push    ebp
        push    esi
        call    FUN_100302e0
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebp
        jz      L_f9b4
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0xc], ebp
    L_f9b4:
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, ebp
        jz      L_f9c4
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x10], ebp
    L_f9c4:
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, ebp
        jz      L_f9d4
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x18], ebp
    L_f9d4:
        push    0x1
        call    dword ptr [g_10049200]
        mov     ebx, dword ptr [esi + 0x20]
        mov     edi, dword ptr [ebx]
        cmp     edi, ebx
        jz      L_fa0c
    L_f9e5:
        mov     eax, edi
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [edi]
        mov     dword ptr [edx], ecx
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        push    eax
        mov     dword ptr [edx + 0x4], ecx
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x24]
        add     esp, 0x4
        dec     ecx
        cmp     edi, ebx
        mov     dword ptr [esi + 0x24], ecx
        jnz     L_f9e5
    L_fa0c:
        mov     edx, dword ptr [esi + 0x20]
        push    edx
        call    FUN_10001d60
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x4
        pop     edi
        mov     dword ptr [esi + 0x20], ebp
        mov     dword ptr [esi + 0x24], ebp
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
