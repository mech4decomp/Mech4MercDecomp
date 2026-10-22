/*
 * FUN_1000C7F0 (190 B) - __stdcall, RET 0x10.  Hash-table insert/grow:
 * validates the descriptor (ebp), optionally grows the backing buffer via
 * FUN_1000c220, copies a slot via rep movsd/movsb, and dispatches to
 * FUN_1000c8b0 / FUN_1000c790.  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1000c790(void);   /* rel32 call */
extern void __stdcall FUN_1000c220(void);   /* rel32 call (grow) */
extern void __stdcall FUN_1000c8b0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000C7F0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        test    ebx, ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        je      short L_1000c80c
        cmp     esi, edi
        jbe     L_1000c894
L_1000c80c:
        mov     ebp, dword ptr [esp + 0x14]
        mov     cl, byte ptr [ebp + 6]
        mov     eax, 1
        shl     eax, cl
        cmp     edi, eax
        jae     short L_1000c888
        mov     al, byte ptr [ebp + 4]
        test    al, al
        je      short L_1000c888
        movzx   ecx, byte ptr [ebp + 5]
        mov     eax, edi
        shr     eax, cl
        mov     edx, esi
        shr     edx, cl
        test    eax, eax
        je      short L_1000c83d
L_1000c835:
        shr     eax, 1
        shr     edx, 1
        test    eax, eax
        jne     short L_1000c835
L_1000c83d:
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      short L_1000c849
        cmp     eax, edx
        je      L_1000c894
L_1000c849:
        push    esi
        push    ebp
        call    FUN_1000c790
        mov     ebx, eax
        test    ebx, ebx
        je      short L_1000c8a5
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      L_1000c894
        mov     ecx, edi
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebp
        call    FUN_1000c8b0
        mov     esi, dword ptr [esp + 0x20]
        jmp     short L_1000c894
L_1000c888:
        lea     edx, [esi + 1]
        push    edx
        push    ebx
        call    FUN_1000c220
        mov     ebx, eax
L_1000c894:
        test    ebx, ebx
        mov     eax, ebx
        je      short L_1000c8a7
        pop     edi
        mov     byte ptr [ebx + esi], 0xff
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
L_1000c8a5:
        mov     eax, ebx
L_1000c8a7:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
