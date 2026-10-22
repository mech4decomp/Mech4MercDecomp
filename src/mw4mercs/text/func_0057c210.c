/*
 * FUN_0057C210 (354 B) — Object filtering and collection.
 *
 * Takes a parameter that may be a type ID or object reference. If the
 * high bits indicate a type (0xF00000 mask), resolves via a lookup;
 * otherwise iterates through a global collection, filtering objects
 * by type and conditions, collecting matching ones into a buffer.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00580be0(int id, void *buf);
extern int __cdecl FUN_00566c80(void);
extern int __cdecl FUN_0064e600(int obj);
extern int __cdecl FUN_0064e540(int obj);
extern int __cdecl FUN_0064e100(void);
extern int __cdecl FUN_004fcb30(int id);
extern int __cdecl FUN_00415230(int this, int param);
extern void __cdecl FUN_00580d50(int *buf, void *val, int count);
extern void __cdecl FUN_004084e0(void *ptr);

/* extern data symbols for absolute-address loads */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f24d8;

__declspec(naked) void __cdecl FUN_0057C210(void)
{
    __asm {
        sub     esp, 0x0c
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0x0c], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        jz      type_lookup
        lea     eax, [esp + 0x0c]
        push    eax
        add     esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add     esp, 8
        jmp     done_collect
type_lookup:
        call    FUN_00566c80
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call    FUN_0064e600
        test    al, al
        jz      done_collect
        push    esi
        mov     ecx, edi
        call    FUN_0064e540
        mov     ebp, eax
        mov     ecx, ebp
        call    FUN_0064e100
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jz      done_collect
inner_loop:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      next_item
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     next_item
        mov     eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_item
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      next_item
        mov     eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_item
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     next_item
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], esi
        jz      grow_buffer
        test    eax, eax
        jz      skip_add
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [esp + 0x10]
skip_add:
        add     eax, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     next_item
grow_buffer:
        push    1
        lea     ecx, [esp + 0x20]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00580d50
next_item:
        mov     ecx, ebp
        add     edi, 4
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jnz     inner_loop
done_collect:
        mov     esi, dword ptr [esp + 0x0c]
        cmp     esi, dword ptr [esp + 0x10]
        jz      free_check
second_loop:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x124]
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     second_loop
        mov     esi, dword ptr [esp + 0x0c]
free_check:
        test    esi, esi
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x0c
        ret
    }
}
