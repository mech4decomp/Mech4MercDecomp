/*
 * FUN_005663b0 (442 B) — Stats/scoreboard update function.
 *
 * Processes mission parameters, converts strings, calls dispatch function.
 *
 * __stdcall (no params).
 * CFLAGS: /O1
 */

extern void __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __stdcall FUN_00563710(void *a, void *b);

__declspec(naked) int __stdcall FUN_005663b0(void)
{
    

extern int DAT_007eebd4;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dd268;
extern int DAT_0076b3e8;
extern int DAT_008589cc;
extern int DAT_007eebf0;
extern int DAT_0076b404;
extern int DAT_0076b3f8;
extern int DAT_007eebf4;
__asm {
        mov eax, dword ptr [DAT_007eebd4]
        sub     esp, 0x304
        test    eax, eax
        push    ebp
        push    esi
        push    edi
        jz      l_ret_error
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ebp, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [DAT_007dd268]
        xor     ebp, 0x85739531
        test    ecx, ecx
        jz      l_ret_error
        mov     eax, dword ptr [ecx + 0x40ee8]
        test    eax, eax
        jz      l_ret_error
        test    ebp, ebp
        jz      l_ret_error
        mov     eax, dword ptr [ebp + 0x239dec]
        test    eax, eax
        jz      l_skip_free
        push    eax
        call    FUN_004084e0
        mov ecx, dword ptr [DAT_007dd268]
        add     esp, 0x4
        mov     dword ptr [ebp + 0x239dec], 0x0

l_skip_free:
        mov     eax, dword ptr [ecx + 0x40ee8]
        mov     ecx, dword ptr [eax + 0x84]
        test    ecx, ecx
        jz      l_ret_one
        mov     ecx, dword ptr [eax + 0x68]
        test    ecx, ecx
        jz      l_ret_one
        lea     esi, [ebp + 0x239ddc]
        mov     ecx, 0x4
        mov     edi, 0x7afaf0
        xor     edx, edx
        repz cmpsd
        jz      l_ret_one
        push    ebx
        push    0x80
        call    FUN_004084d0
        push    0x80
        mov     esi, eax
        call    FUN_004084d0
        mov ebx, dword ptr [DAT_0076b3e8]
        mov     edi, eax
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x80]
        push    0x40
        push    edx
        push    esi
        call    ebx
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x40ee8]
        mov     edx, dword ptr [ecx + 0x68]
        push    0x40
        push    edx
        push    edi
        call    ebx
        lea     eax, [esp + 0x34]
        push    eax
        lea     eax, [ebp + 0x239ddc]
        push    eax
        call    FUN_00563710
        mov ecx, dword ptr [DAT_008589cc]
        push    0x100
        push    ecx
        lea     edx, [esp + 0x144]
        push    edx
        call    ebx
        add     esp, 0x34
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x11c]
        push    edx
        push    edi
        push    esi
        mov     dword ptr [esp + 0x24], 0x0
        call dword ptr [DAT_007eebf0]
        push    esi
        mov     ebx, eax
        call    FUN_004084e0
        push    edi
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x8
        test    eax, eax
        jz      l_skip_convert
        push    eax
        call dword ptr [DAT_0076b404]
        mov     esi, eax
        inc     esi
        lea     eax, [esi + esi]
        push    eax
        call    FUN_004084d0
        mov     dword ptr [ebp + 0x239dec], eax
        mov     ecx, dword ptr [esp + 0x18]
        push    esi
        push    ecx
        push    eax
        call dword ptr [DAT_0076b3f8]
        add     esp, 0x14
        lea     edx, [esp + 0x10]
        push    edx
        call dword ptr [DAT_007eebf4]

l_skip_convert:
        mov     eax, ebx
        pop     ebx
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x304
        ret

l_ret_one:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebp
        add     esp, 0x304
        ret

l_ret_error:
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebp
        add     esp, 0x304
        ret
    }


}
