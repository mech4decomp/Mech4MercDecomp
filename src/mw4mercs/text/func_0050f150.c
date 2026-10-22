/*
 * FUN_0050f150 (989 B) — Large object destructor (__fastcall).
 *
 * Frees all allocated buffers, calls cleanup functions, and
 * releases global resources.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern void FUN_006f4230(void);
extern void FUN_004179f0(void);
extern void FUN_00510a70(void);
extern void FUN_00608020(void);
extern void FUN_0051ed70(void);
extern void FUN_0040d9b0(void);
extern void FUN_006bbb40(void);
extern void FUN_0041ef60(void);
extern void FUN_004169c0(void);
extern void FUN_00417980(void);

__declspec(naked) void __fastcall FUN_0050f150(void *this)
{
    

extern int DAT_007dd240;
extern int DAT_007dd248;
extern int DAT_007dd24c;
extern int DAT_007dd244;
extern int DAT_007dd250;
extern int DAT_007dd254;
extern int DAT_007f27dc;
extern int DAT_007f27d0;
extern int DAT_007ddd21;
__asm {
sub     esp, 0x08
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x40970]
        push    edi
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [esi + 0x40988]
        push    ecx
        call    FUN_006f4230
        mov     edx, dword ptr [esi + 0x40980]
        push    edx
        call    FUN_006f4230
        mov     ebx, dword ptr [esi + 0x409b4]
        mov     ebp, dword ptr [esi + 0x409b8]
        mov     eax, ebx
        sub     eax, ebp
        mov     edi, ebp
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], 0x32

    l_loop1:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      l_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free1:
        test    ebx, ebx
        jz      l_skip_free2
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax + edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free2:
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0x04
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     l_loop1

        push    ebp
        call    FUN_004084e0
        push    ebx
        call    FUN_004084e0
        mov     ebx, dword ptr [esi + 0x40a4c]
        add     esp, 0x08
        mov     edi, ebx
        mov     ebp, 0x20

    l_loop2:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      l_skip_free3
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free3:
        add     edi, 0x04
        dec     ebp
        jnz     l_loop2

        push    ebx
        call    FUN_004084e0
        mov     edx, dword ptr [esi + 0x40cfc]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [esi + 0x40a44]
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esi + 0x40a50], ebx
        mov     dword ptr [esi + 0x40c54], ebx
        call    FUN_004084e0
        mov     ecx, dword ptr [esi + 0x40a48]
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [esi + 0x40974]
        push    edx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd240]
        add     esp, 0x14
        xor     edi, edi
        cmp     eax, ebx
        jle     l_skip_loop3

    l_loop3:
        mov eax, dword ptr [DAT_007dd248]
        mov     ecx, dword ptr [eax + edi * 4]
        push    ecx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd240]
        add     esp, 0x04
        inc     edi
        cmp     edi, eax
        jl      l_loop3

    l_skip_loop3:
        mov edx, dword ptr [DAT_007dd248]
        push    edx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd240]
        add     esp, 0x04
        xor     edi, edi
        cmp     eax, ebx
        jle     l_skip_loop4

    l_loop4:
        mov eax, dword ptr [DAT_007dd24c]
        mov     ecx, dword ptr [eax + edi * 4]
        push    ecx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd240]
        add     esp, 0x04
        inc     edi
        cmp     edi, eax
        jl      l_loop4

    l_skip_loop4:
        mov edx, dword ptr [DAT_007dd24c]
        push    edx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd244]
        add     esp, 0x04
        xor     edi, edi
        cmp     eax, ebx
        jle     l_skip_loop5

    l_loop5:
        mov eax, dword ptr [DAT_007dd250]
        mov     ecx, dword ptr [eax + edi * 4]
        push    ecx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd244]
        add     esp, 0x04
        inc     edi
        cmp     edi, eax
        jl      l_loop5

    l_skip_loop5:
        mov edx, dword ptr [DAT_007dd250]
        push    edx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd244]
        add     esp, 0x04
        xor     edi, edi
        cmp     eax, ebx
        jle     l_skip_loop6

    l_loop6:
        mov eax, dword ptr [DAT_007dd254]
        mov     ecx, dword ptr [eax + edi * 4]
        push    ecx
        call    FUN_004084e0
        mov eax, dword ptr [DAT_007dd244]
        add     esp, 0x04
        inc     edi
        cmp     edi, eax
        jl      l_loop6

    l_skip_loop6:
        mov edx, dword ptr [DAT_007dd254]
        push    edx
        call    FUN_004084e0
        add     esp, 0x04
        lea     ecx, [esi + 0x14]
        call    FUN_004179f0
        mov     ecx, esi
        call    FUN_00510a70
        mov ecx, dword ptr [DAT_007f27dc]
        cmp     ecx, ebx
        jz      l_skip_free7
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f27dc], ebx

    l_skip_free7:
        mov edi, dword ptr [DAT_007f27d0]
        cmp     edi, ebx
        jz      l_skip_free8
        mov     ecx, edi
        call    FUN_00608020
        push    edi
        call    FUN_004084e0
        add     esp, 0x04
        mov dword ptr [DAT_007f27d0], ebx

    l_skip_free8:
        mov     eax, dword ptr [esi + 0x409a4]
        cmp     eax, ebx
        jz      l_skip_free9
        push    eax
        call    FUN_006f4230

    l_skip_free9:
        mov     eax, dword ptr [esi + 0x409a8]
        cmp     eax, ebx
        jz      l_skip_free10
        push    eax
        call    FUN_006f4230

    l_skip_free10:
        mov     eax, dword ptr [esi + 0x40d00]
        cmp     eax, ebx
        jz      l_skip_free11
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
        mov     dword ptr [esi + 0x40d00], ebx

    l_skip_free11:
        mov     eax, dword ptr [esi + 0x40d04]
        cmp     eax, ebx
        jz      l_skip_free12
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
        mov     dword ptr [esi + 0x40d04], ebx

    l_skip_free12:
        mov     eax, dword ptr [esi + 0x40d08]
        cmp     eax, ebx
        jz      l_skip_free13
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
        mov     dword ptr [esi + 0x40d08], ebx

    l_skip_free13:
        mov     ecx, esi
        mov     dword ptr [esi + 0x40d0c], ebx
        call    FUN_0051ed70
        mov     ecx, dword ptr [esi + 0x40ee8]
        cmp     ecx, ebx
        jz      l_skip_free14
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]

    l_skip_free14:
        mov     ecx, dword ptr [esi + 0x40ee4]
        cmp     ecx, ebx
        jz      l_skip_free15
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]

    l_skip_free15:
        mov     edx, dword ptr [esi + 0x40d18]
        lea     ebp, [esi + 0x40d18]
        mov     ecx, ebp
        call    dword ptr [edx + 0x08]
        mov     eax, dword ptr [esi + 0x40d2c]
        test    eax, eax
        jz      l_skip_free16
        mov     ecx, dword ptr [eax - 0x04]
        lea     edx, [eax - 0x04]
        lea     edi, [eax + ecx * 4]
        dec     ecx
        mov     dword ptr [esp + 0x14], edx
        js      l_skip_free17
        lea     ebx, [ecx + 0x01]

    l_loop7:
        sub     edi, 0x04
        mov     ecx, edi
        call    FUN_0040d9b0
        dec     ebx
        jnz     l_loop7
        mov     edx, dword ptr [esp + 0x14]

    l_skip_free17:
        push    edx
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free16:
        mov al, byte ptr [DAT_007ddd21]
        test    al, al
        jnz     l_skip_free18
        call    FUN_006bbb40

    l_skip_free18:
        lea     ecx, [esi + 0x40eb8]
        call    FUN_0041ef60
        mov     ecx, ebp
        call    FUN_004169c0
        mov     eax, dword ptr [esi + 0x40990]
        test    eax, eax
        jz      l_skip_free19
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free19
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free19:
        mov     eax, dword ptr [esi + 0x4098c]
        test    eax, eax
        jz      l_skip_free20
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free20
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free20:
        mov     eax, dword ptr [esi + 0x40978]
        test    eax, eax
        jz      l_skip_free21
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free21
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free21:
        lea     ecx, [esi + 0x14]
        call    FUN_00417980
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      l_skip_free22
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free22
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free22:
        mov     eax, dword ptr [esi + 0x0c]
        test    eax, eax
        jz      l_skip_free23
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free23
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free23:
        mov     eax, dword ptr [esi + 0x04]
        test    eax, eax
        jz      l_skip_free24
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free24
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_free24:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      l_done
        mov     cl, byte ptr [esi - 0x01]
        lea     eax, [esi - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x08
        ret
    }


}
