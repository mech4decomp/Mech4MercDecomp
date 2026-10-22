/*
 * FUN_10005500 (264 B) - __stdcall, RET 0x14.
 * Validates flags/pointers, then either registers a string via
 * FUN_1001b540/FUN_1001b480 or searches a hash table (indirect vtable calls)
 * and re-registers via FUN_1001b480.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int  __cdecl FUN_1001b540(void);      /* rel32 call, ecx=this, 1 arg */
extern int  __cdecl FUN_1001b480(void);      /* rel32 call, ecx=this, 3 args */

__declspec(naked) void __stdcall FUN_10005500(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        push    edi
        jnz     L_551b
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120008
        pop     ebx
        ret     0x14
    L_551b:
        mov     eax, dword ptr [esi + 0x7c]
        test    eax, eax
        jnz     L_552e
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120008
        pop     ebx
        ret     0x14
    L_552e:
        mov     edi, dword ptr [esp + 0x1c]
        test    edi, edi
        jnz     L_5542
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     0x14
    L_5542:
        mov     ebx, dword ptr [esp + 0x20]
        test    ebx, ebx
        jnz     L_5556
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004003
        pop     ebx
        ret     0x14
    L_5556:
        mov     ebp, dword ptr [esp + 0x18]
        test    ebp, ebp
        jnz     L_5581
        mov     ecx, dword ptr [esi + 0x78]
        push    edi
        call    FUN_1001b540
        test    eax, eax
        jl      L_5581
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esi + 0x78]
        push    eax
        push    ebx
        push    edi
        call    FUN_1001b480
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    L_5581:
        mov     ebx, dword ptr [esi + 0x7c]
        push    ebp
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 0x2]
        mov     ecx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      L_55df
    L_55a0:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_55bb
        mov     eax, dword ptr [esi + 0x8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [ebx + 0x8]
        test    al, al
        jnz     L_55cd
        mov     ebp, dword ptr [esp + 0x18]
    L_55bb:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_55a0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120c01
        pop     ebx
        ret     0x14
    L_55cd:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        mov     esi, dword ptr [esp + 0x14]
        jz      L_55db
        push    esi
        call    ebx
    L_55db:
        test    esi, esi
        jnz     L_55eb
    L_55df:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120c01
        pop     ebx
        ret     0x14
    L_55eb:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_1001b480
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
