/*
 * FUN_0061ba40 (651 B) — __thiscall: mission/pilot-save loader. Reads a
 * stream object (this+0x34) via virtual calls, allocates a 0xff-entry array
 * of sub-objects (this+0x57e0), and reconstructs per-entry state. Returns
 * bool (AL=1 on success).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00412a00(void);
extern void FUN_004084d0(void);
extern void FUN_0061ae30(void);
extern void FUN_006fab90(void);

__declspec(naked) void FUN_0061ba40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    esi
        mov     esi, dword ptr [ebp+8]
        cmp     dword ptr [esi+0x1c], 0x14
        push    edi
        mov     edi, ecx
        jbe     Lcc1
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [ebp-0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        cmp     dword ptr [ebp-0x10], 0xaaaaaaaa
        jnz     Lcc1
        push    ebx
        lea     edx, [edi+0x5bdc]
        push    edx
        push    esi
        mov     byte ptr [edi+0x2c], 1
        call    FUN_00412a00
        mov     eax, dword ptr [esi]
        add     esp, 8
        push    0xc
        lea     ecx, [edi+0x5be0]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        push    0xc
        lea     ecx, [edi+0x5bec]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        lea     ebx, [edi+0x20]
        push    4
        push    ebx
        mov     ecx, esi
        mov     dword ptr [ebp-0x18], ebx
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi+0x24], eax
        push    4
        lea     eax, [edi+0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp+8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp+8], 0
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [edi+0x34]
        mov     eax, dword ptr [ebp+8]
        mov     edx, dword ptr [ebx]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x14]
        mov     eax, dword ptr [ebp+8]
        test    eax, eax
        jle     Lb07
        mov     edx, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebp-0x14], edx
        call    dword ptr [eax+4]
        mov     edx, dword ptr [ebp-0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
Lb07:
        lea     eax, [edi+0x57e0]
        mov     dword ptr [ebp-0x1c], eax
        mov     dword ptr [ebp-0xc], eax
        mov     dword ptr [ebp-0x8], 0xff
L1a:
        mov     eax, dword ptr [ebp-0x18]
        mov     esi, dword ptr [eax]
        lea     ecx, [esi+esi*4]
        lea     edx, [esi+ecx*2]
        shl     edx, 3
        push    edx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        mov     dword ptr [ebp-0x14], eax
        jz      Lb52
        dec     esi
        test    esi, esi
        mov     ebx, eax
        jl      Lb54
        inc     esi
L40:
        mov     ecx, ebx
        call    FUN_0061ae30
        add     ebx, 0x58
        dec     esi
        jnz     L40
        mov     eax, dword ptr [ebp-0x14]
        jmp     Lb54
Lb52:
        xor     eax, eax
Lb54:
        mov     ecx, dword ptr [ebp-0xc]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ebp-0x8]
        add     ecx, 4
        dec     eax
        mov     dword ptr [ebp-0xc], ecx
        mov     dword ptr [ebp-0x8], eax
        jnz     L1a
        mov     esi, dword ptr [edi+0x34]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+8]
        test    eax, eax
        jz      Lc80
L7a:
        xor     ebx, ebx
        push    1
        lea     eax, [ebp-4]
        mov     dword ptr [ebp-4], ebx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp-4]
        cmp     eax, 1
        jnz     Lc09
        push    4
        lea     eax, [ebp-8]
        mov     dword ptr [ebp-8], ebx
        mov     dword ptr [ebp-0xc], ebx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [ebp-0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp-8]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*2]
        mov     eax, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [edi+eax*4+0x57e0]
        mov     dword ptr [ecx+edx*8], 1
        push    1
        lea     eax, [ebp-0x14]
        mov     dword ptr [ebp-0x14], ebx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+4]
        mov     ecx, dword ptr [ebp-8]
        lea     edx, [ecx+ecx*4]
        lea     ecx, [ecx+edx*2]
        mov     edx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [edi+edx*4+0x57e0]
        mov     dword ptr [edx+ecx*8+4], eax
        mov     ecx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x18]
        jmp     Lc6e
Lc09:
        cmp     eax, ebx
        jnz     Lc5c
        push    4
        lea     eax, [ebp-0xc]
        mov     dword ptr [ebp-0xc], ebx
        mov     dword ptr [ebp-8], ebx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [ebp-8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp-0xc]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*2]
        mov     eax, dword ptr [ebp-8]
        mov     ecx, dword ptr [edi+eax*4+0x57e0]
        mov     dword ptr [ecx+edx*8+4], ebx
        mov     eax, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [ebp-8]
        lea     edx, [eax+eax*4]
        lea     eax, [eax+edx*2]
        mov     edx, dword ptr [edi+ecx*4+0x57e0]
        mov     dword ptr [edx+eax*8], ebx
        jmp     Lc6e
Lc5c:
        push    0x78c640
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      Lc6e
        int     3
Lc6e:
        mov     esi, dword ptr [edi+0x34]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+8]
        test    eax, eax
        jnz     L7a
Lc80:
        mov     ecx, dword ptr [ebp-0x18]
        mov     esi, dword ptr [ecx]
        mov     edx, dword ptr [ebp-0x1c]
        mov     edi, 0xff
L8d:
        cmp     esi, 1
        jle     Lcb0
        mov     eax, dword ptr [edx]
        add     eax, 0x58
        lea     ecx, [esi-1]
L9a:
        cmp     dword ptr [eax], 2
        jnz     Lcaa
        mov     ebx, dword ptr [eax-0x58]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [eax-0x54]
        mov     dword ptr [eax+4], ebx
Lcaa:
        add     eax, 0x58
        dec     ecx
        jnz     L9a
Lcb0:
        add     edx, 4
        dec     edi
        jnz     L8d
        pop     ebx
        pop     edi
        mov     al, 1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
Lcc1:
        pop     edi
        xor     al, al
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
