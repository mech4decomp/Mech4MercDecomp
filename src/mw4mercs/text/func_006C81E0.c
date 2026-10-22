/*
 * FUN_006C81E0 (156 B) — __stdcall, RET 4 (1 stack param).
 * Texture fill: computes a row stride into a destination buffer and fills
 * rows with a color value (0xff000000 | hash), using a global hash seed
 * (g_0083a254) that is advanced per call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0083a254;
extern void __cdecl FUN_00717b30(void);
extern void __cdecl FUN_00717ac0(void);

__declspec(naked) void __stdcall FUN_006C81E0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        xor     eax, eax
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x10], eax
        push    edi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x10]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x28], eax
        mov     edx, dword ptr [ebx + 0x10]
        push    eax
        push    edx
        call    FUN_00717b30
        mov     eax, dword ptr [esi]
        imul    eax, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esi + 4]
        mov     ecx, dword ptr [esp + 0x10]
        add     eax, ebp
        lea     edx, [ecx + eax*4]
        mov     ecx, dword ptr [g_0083a254]
        lea     edi, [ecx*8]
        xor     edi, ecx
        mov     eax, ecx
        mov     ecx, dword ptr [esi + 0xc]
        add     edi, 0x31abd1
        or      eax, 0xff000000
        test    ecx, ecx
        mov     dword ptr [g_0083a254], edi
        jle     L_6c8269
        mov     esi, dword ptr [esi + 8]
        mov     ebp, ecx
L_6c8255:
        test    esi, esi
        jle     L_6c825f
        mov     ecx, esi
        mov     edi, edx
        rep stosd
L_6c825f:
        dec     ebp
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edx, [edx + ecx*4]
        jne     L_6c8255
L_6c8269:
        mov     edx, dword ptr [ebx + 0x10]
        push    edx
        call    FUN_00717ac0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
