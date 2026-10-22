/*
 * FUN_00612280 (354 B, __thiscall RET 8) - in-.text data block transcription
 * (wave U). Allocates a buffer, iterates a decoded list (FUN_00416BC0/
 * FUN_00416CC0), copies string data, frees via FUN_004084E0.
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

extern int  g_007dab44;
extern int  g_007dab40;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_00612280(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x24]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x38]
        test    ebx, ebx
        push    edi
        mov     edi, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x18], esi
        jle     L6122c4
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L6122b2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 0xc], 0
    L6122b2:
        push    0
        lea     eax, [ebx*4]
        push    eax
        call    FUN_006f3c80
        mov     dword ptr [esi + 0xc], eax
    L6122c4:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        add     eax, 0x54
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], 0x779f0c
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        je      L6123ca
        mov     eax, edi
        sub     eax, ebp
        mov     dword ptr [esp + 0x34], 0
        mov     dword ptr [esp + 0x14], eax
    L612312:
        cmp     dword ptr [ebx + 0x20], 2
        je      L6123b7
        mov     eax, dword ptr [ebp]
        test    eax, eax
        je      L612330
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
    L612330:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     edx, dword ptr [ebx + 0x10]
        test    edx, edx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [ebp], eax
        je      L61234d
        inc     byte ptr [edx - 1]
    L61234d:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep movsb
        je      L612387
        mov     cl, byte ptr [edx - 1]
        lea     eax, [edx - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L612387
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L612387:
        mov     ecx, dword ptr [ebx + 0x20]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [edx + ebp], ecx
        mov     edx, dword ptr [esp + 0x34]
        mov     cx, word ptr [ebx + 0x18]
        mov     bx, word ptr [ebx + 0x1a]
        add     eax, edx
        add     edx, 4
        mov     word ptr [eax], cx
        mov     word ptr [eax + 2], bx
        mov     dword ptr [esp + 0x34], edx
        add     ebp, 4
    L6123b7:
        lea     ecx, [esp + 0x1c]
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        jne     L612312
    L6123ca:
        lea     ecx, [esp + 0x1c]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x20
        ret     8
    }
}
