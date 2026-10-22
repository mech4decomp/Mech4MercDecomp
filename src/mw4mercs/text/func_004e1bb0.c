/*
 * FUN_004e1bb0 (337 B) — MLR/Adept renderer update (__thiscall). Iterates
 * a list of render objects, accumulates bounds, and updates the renderer
 * state (or falls back to a default).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041ef60(void);

extern unsigned char g_007dc694;
extern unsigned short g_007dc696;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

__declspec(naked) void FUN_004e1bb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x74
        push    esi
        mov     esi, dword ptr [ebp+8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x64
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        mov     ecx, dword ptr [ebp+0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004d9400
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+4]
        mov     esi, eax
        push    2
        lea     ecx, [ebp-0x30]
        mov     dword ptr [esi], 0x64
        call    FUN_0041ee70
        mov     al, byte ptr [g_007dc694]
        mov     cx, word ptr [g_007dc696]
        push    2
        lea     edx, [ebp-6]
        mov     byte ptr [ebp-8], al
        mov     eax, dword ptr [ebp-0x30]
        mov     word ptr [ebp-6], cx
        push    edx
        lea     ecx, [ebp-0x30]
        call    dword ptr [eax+0x24]
        mov     edi, dword ptr [edi+0xbc]
L_1c13:
        mov     edx, dword ptr [ebp-0x1c]
L_1c16:
        test    edi, edi
        jz      L_1c58
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        mov     edi, dword ptr [edi+4]
        jz      L_1c58
        mov     eax, dword ptr [ecx+0x10]
        and     eax, 0x18
        cmp     al, 0x18
        jnz     L_1c16
        mov     edx, dword ptr [ecx]
        push    0
        lea     eax, [ebp-0x30]
        push    eax
        call    dword ptr [edx+0xc]
        test    eax, eax
        jz      L_1c13
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebp-0x1c]
        add     edx, ecx
        cmp     edx, dword ptr [ebp-0x18]
        mov     dword ptr [ebp-0x1c], edx
        jbe     L_1c4e
        mov     dword ptr [ebp-0x18], edx
L_1c4e:
        mov     cx, word ptr [eax+0x1a]
        add     word ptr [ebp-6], cx
        jmp     L_1c16
L_1c58:
        sub     edx, dword ptr [ebp-0x20]
        cmp     edx, 2
        jbe     L_1cda
        mov     edx, dword ptr [ebp-0x30]
        push    0
        lea     ecx, [ebp-0x30]
        call    dword ptr [edx+0xc]
        mov     edx, dword ptr [ebp-0x30]
        push    2
        lea     eax, [ebp-6]
        push    eax
        lea     ecx, [ebp-0x30]
        mov     dword ptr [ebp-0x28], 0xffffffec
        call    dword ptr [edx+0x24]
        push    0
        push    0
        lea     ecx, [ebp-0x74]
        call    FUN_004d2000
        push    0
        lea     eax, [ebp-0x30]
        push    eax
        lea     ecx, [ebp-0x74]
        call    FUN_004d2680
        push    0x7723bc
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_1cad
        int     3
L_1cad:
        mov     cx, word ptr [ebp-0x34]
        mov     dx, word ptr [ebp-0x32]
        mov     word ptr [esi+0x60], cx
        mov     cl, byte ptr [esi+0x18]
        mov     word ptr [esi+0x62], dx
        mov     al, byte ptr [ebp-8]
        add     cl, al
        mov     byte ptr [esi+0x18], cl
        mov     cx, word ptr [ebp-6]
        add     word ptr [esi+0x1a], cx
        lea     ecx, [ebp-0x74]
        call    FUN_004d21c0
        jmp     L_1cef
L_1cda:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi+0x60], dx
        mov     word ptr [esi+0x62], ax
L_1cef:
        lea     ecx, [ebp-0x30]
        call    FUN_0041ef60
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
