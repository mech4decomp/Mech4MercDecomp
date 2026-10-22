/*
 * FUN_00480890 (387 B) — __thiscall MLRIndexedPrimitiveBase constructor.
 * Initializes member buffers, queries a stream object (EDI, vtable at
 * [EDI]) for vertex/index counts, allocates buffers, and wires up the
 * global MLR primitive-base. RET 0xc (3 stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);
extern int  __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_007da694;
extern int g_007da690;
extern int g_007b9580;

__declspec(naked) void FUN_00480890(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+8]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     edi, edi
        mov     dword ptr [esi+0x14], edi
        mov     dword ptr [esi+0x18], edi
        lea     ecx, [esi+0x24]
        mov     dword ptr [esi+0x1c], edi
        mov     dword ptr [esi+0x20], edi
        call    FUN_004911e0
        lea     ecx, [esi+0x2c]
        call    FUN_00491280
        mov     eax, dword ptr [ebp+0x10]
        cmp     eax, edi
        mov     dword ptr [esi+0xc], edi
        jle     L_808e8
        cmp     eax, 2
        jg      L_808e8
        push    0x76e300
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_80a02
        int     3
        jmp     L_80a02
    L_808e8:
        mov     edi, dword ptr [ebp+0xc]
        mov     edx, dword ptr [edi]
        push    ebx
        push    4
        lea     ebx, [esi+0x18]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_80919
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0x14], eax
        lea     eax, [ebx+ebx*2]
        shl     eax, 2
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        jmp     L_80920
    L_80919:
        mov     dword ptr [esi+0x14], 0
    L_80920:
        mov     edx, dword ptr [edi]
        push    4
        lea     ebx, [esi+0x20]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_8094e
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0x1c], eax
        lea     eax, [ebx*8]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        jmp     L_80955
    L_8094e:
        mov     dword ptr [esi+0x1c], 0
    L_80955:
        mov     ecx, dword ptr [esi+0x18]
        mov     eax, 0x100
        cmp     ecx, eax
        jbe     L_80973
        mov     ecx, dword ptr [esi+0x14]
        mov     edx, dword ptr [esi+0x1c]
        mov     dword ptr [esi+0x14], ecx
        mov     dword ptr [esi+0x18], eax
        mov     dword ptr [esi+0x1c], edx
        mov     dword ptr [esi+0x20], eax
    L_80973:
        mov     ebx, dword ptr [ebp+0x10]
        cmp     ebx, 0xf
        jge     L_809cd
        mov     eax, dword ptr [edi]
        push    4
        push    0x7da694
        mov     ecx, edi
        call    dword ptr [eax+0x20]
        mov     eax, dword ptr [g_007da694]
        test    eax, eax
        jbe     L_809ae
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx+4]
        mov     ecx, dword ptr [g_007da694]
        mov     dword ptr [g_007da690], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x18]
        jmp     L_809b8
    L_809ae:
        mov     dword ptr [g_007da690], 0
    L_809b8:
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [ebp+0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     cl, byte ptr [ebp+0x10]
        mov     byte ptr [esi+0x12], cl
        jmp     L_809e6
    L_809cd:
        mov     edx, dword ptr [edi]
        push    1
        lea     eax, [esi+0x12]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        xor     eax, eax
        mov     dword ptr [g_007da690], eax
        mov     dword ptr [g_007da694], eax
    L_809e6:
        mov     ecx, dword ptr [g_007b9580]
        push    ecx
        call    FUN_006f4950
        push    ebx
        push    edi
        lea     ecx, [esi+0x2c]
        call    FUN_00491440
        call    FUN_006f49a0
        pop     ebx
    L_80a02:
        pop     edi
        mov     byte ptr [esi+0x11], 1
        mov     word ptr [esi+8], 1
        mov     byte ptr [esi+0x13], 0
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0xc
    }
}
