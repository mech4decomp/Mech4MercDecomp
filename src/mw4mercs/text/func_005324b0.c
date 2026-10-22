/*
 * FUN_005324B0 (369 B) — Decal ID registration/lookup function
 * Called with __thiscall (ECX = this pointer).
 * Registers a decal by name, assigning it a numeric ID.
 * Returns the decal ID (either existing or newly assigned).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005324b0(void)
{
    

extern void __cdecl FUN_00532738(void);
extern void __cdecl FUN_0053280f(void);
extern void __cdecl FUN_100412531(void);
extern void __cdecl FUN_100412978(void);
extern void __cdecl FUN_1004128ff(void);
extern int DAT_0076b318;
extern void __cdecl FUN_00532601(void);
extern void __cdecl FUN_100408455(void);
extern void __cdecl FUN_100416b16(void);
extern void __cdecl FUN_100416c45(void);
extern void __cdecl FUN_100416bbf(void);
extern void __cdecl FUN_100416c16(void);
extern void __cdecl FUN_1004083d2(void);
extern int DAT_007b8c10;
extern void __cdecl FUN_10041506c(void);
extern void __cdecl FUN_10041264d(void);
extern void __cdecl FUN_100416942(void);
extern void __cdecl FUN_100416b05(void);
__asm {
sub     esp, 0x18
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     esi, ecx
        push    edi
        call FUN_00532738
        xor     ebp, ebp
        cmp     eax, ebp
        jz      not_found
        mov     ecx, dword ptr [eax + 0x10]
        pop     edi
        inc     ecx
        pop     esi
        mov     dword ptr [eax + 0x10], ecx
        mov     eax, dword ptr [eax + 0x14]
        pop     ebp
        add     esp, 0x18
        ret     0x04

not_found:
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x2C], 0x42
        call FUN_0053280f
        test    al, al
        jz      not_stock

        push    edi
        lea     ecx, [esp + 0x10]
        call FUN_100412531
        lea     ecx, [esp + 0x0C]
        call FUN_100412978
        lea     ecx, [esp + 0x0C]
        call FUN_1004128ff
        mov     eax, dword ptr [esp + 0x0C]
        add     eax, 0x06
        push    eax
        call dword ptr [DAT_0076b318]
        add     esp, 0x04
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], eax
        call FUN_00532601
        mov     eax, dword ptr [esp + 0x0C]
        cmp     eax, ebp
        mov     esi, dword ptr [esp + 0x28]
        jz      skip_free_stock
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_stock
        push    eax
        call FUN_100408455
        add     esp, 0x04

skip_free_stock:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     0x04

not_stock:
        push    ebx
        lea     ebx, [esi + 0xD8]
        push    ebx
        lea     ecx, [esp + 0x18]
        call FUN_100416b16
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x0077B17C
        call FUN_100416c45
        test    eax, eax
        jz      find_done

find_loop:
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ecx + 0x18]
        cmp     eax, 0x42
        jle     find_next
        mov     edx, dword ptr [esp + 0x2C]
        inc     edx
        cmp     eax, edx
        jg      find_done
        mov     dword ptr [esp + 0x2C], eax

find_next:
        lea     ecx, [esp + 0x14]
        call FUN_100416bbf
        lea     ecx, [esp + 0x14]
        call FUN_100416c16
        test    eax, eax
        jnz     find_loop

find_done:
        mov     esi, dword ptr [esp + 0x2C]
        inc     esi
        push    0x1C
        mov     dword ptr [esp + 0x30], esi
        call FUN_1004083d2
        mov     esi, eax
        add     esp, 0x04
        cmp     esi, ebp
        jz      alloc_failed2
        mov eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call FUN_10041506c
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [esi + 0x08], ebp
        mov     dword ptr [esi + 0x0C], ebp
        mov     dword ptr [esi], 0x0077B364
        mov     dword ptr [esi + 0x10], ebp
        jmp     alloc_done2

alloc_failed2:
        xor     esi, esi

alloc_done2:
        push    edi
        lea     ecx, [esi + 0x18]
        call FUN_10041264d
        mov     edx, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esp + 0x2C]
        inc     edx
        mov     dword ptr [esi + 0x10], edx
        lea     edx, [esp + 0x2C]
        push    edx
        mov     dword ptr [esi + 0x14], ecx
        push    esi
        mov     ecx, ebx
        call FUN_100416942
        mov     esi, dword ptr [esp + 0x2C]
        lea     ecx, [esp + 0x14]
        call FUN_100416b05
        pop     ebx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     0x04
    }


}
