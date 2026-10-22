/*
 * FUN_1001ba60 (404 B) — __stdcall, RET 0xC.
 * Hash-list object registration/cleanup handler.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001b800(void);
extern void __cdecl FUN_1001bf80(void);
extern void __cdecl FUN_1001bc00(void);
extern void __cdecl FUN_10004ba0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001ba60(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        push    edi
        xor     edi, edi
        cmp     ebp, edi
        jnz     L_1001ba75
        xor     eax, eax
        jmp     L_1001ba78
    L_1001ba75:
        mov     eax, dword ptr [ebp + 0x24]
    L_1001ba78:
        mov     ebx, dword ptr [esp + 0x24]
        push    eax
        push    ebx
        call    FUN_1001b800
        cmp     eax, edi
        mov     dword ptr [esp + 0x28], eax
        jl      L_1001bbe2
        cmp     ebp, edi
        jz      L_1001bafe
        mov     esi, dword ptr [esp + 0x2c]
        xor     eax, eax
        cmp     esi, edi
        jz      L_1001bb31
        cmp     eax, 0x1001bc20
        jnz     L_1001bab7
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0x10
        ret     0xc
    L_1001bab7:
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x1001c0c0
        push    esi
        mov     dword ptr [esp + 0x24], 0x1001bc20
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x1c], ebp
        mov     byte ptr [esp + 0x20], 0x0
        call    FUN_1001bf80
        lea     edx, [esp + 0x10]
        push    edx
        push    0x1001c0c0
        push    ebp
        mov     dword ptr [esp + 0x1c], esi
        mov     byte ptr [esp + 0x20], 0x1
        call    FUN_1001bf80
        mov     dword ptr [esp + 0x28], edi
        jmp     L_1001bb8e
    L_1001bafe:
        mov     ecx, dword ptr [esp + 0x2c]
        cmp     ecx, edi
        jz      L_1001bb8e
        mov     eax, dword ptr [ebx]
        push    eax
        push    0x10006730
        push    ecx
        call    FUN_1001bf80
        test    al, al
        jz      L_1001bb22
        mov     dword ptr [esp + 0x28], edi
        jmp     L_1001bb8e
    L_1001bb22:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004005
        pop     ebx
        add     esp, 0x10
        ret     0xc
    L_1001bb31:
        mov     edx, dword ptr [ebp + 0x28]
        inc     edx
        cmp     word ptr [ebp], di
        mov     dword ptr [ebp + 0x28], edx
        mov     dword ptr [esp + 0x2c], eax
        jbe     L_1001bb87
    L_1001bb42:
        mov     edx, dword ptr [ebp + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        jz      L_1001bb7a
    L_1001bb56:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_1001bb70
        mov     eax, dword ptr [esi + 0x8]
        push    ebx
        push    esi
        push    eax
        call    FUN_1001bc00
        test    al, al
        mov     ebx, dword ptr [esp + 0x24]
        jz      L_1001bbec
    L_1001bb70:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_1001bb56
        mov     eax, dword ptr [esp + 0x2c]
    L_1001bb7a:
        inc     eax
        cmp     ax, word ptr [ebp]
        mov     dword ptr [esp + 0x2c], eax
        jc      L_1001bb42
        xor     edi, edi
    L_1001bb87:
        mov     eax, dword ptr [ebp + 0x28]
        dec     eax
    L_1001bb8b:
        mov     dword ptr [ebp + 0x28], eax
    L_1001bb8e:
        mov     esi, dword ptr [ebx]
        cmp     dword ptr [esi + 0x24], edi
        jnz     L_1001bbab
        cmp     esi, edi
        jz      L_1001bba9
        mov     ecx, esi
        call    FUN_10004ba0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_1001bba9:
        mov     dword ptr [ebx], edi
    L_1001bbab:
        mov     esi, dword ptr [ebx + 0x4]
        cmp     dword ptr [esi + 0x24], edi
        jnz     L_1001bbca
        cmp     esi, edi
        jz      L_1001bbc7
        mov     ecx, esi
        call    FUN_10004ba0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_1001bbc7:
        mov     dword ptr [ebx + 0x4], edi
    L_1001bbca:
        cmp     dword ptr [ebx + 0xc], edi
        jnz     L_1001bbde
        mov     ecx, dword ptr [ebx + 0x8]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [ebx + 0x8], edi
    L_1001bbde:
        mov     eax, dword ptr [esp + 0x28]
    L_1001bbe2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0xc
    L_1001bbec:
        mov     eax, dword ptr [ebp + 0x28]
        dec     eax
        xor     edi, edi
        jmp     L_1001bb8b
    }
}
