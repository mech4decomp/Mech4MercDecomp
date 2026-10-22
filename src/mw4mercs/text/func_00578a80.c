/*
 * FUN_00578A80 (364 B) — Enumerates objects matching an ID and sets
 * a byte field on each.
 *
 * Takes an object ID and a byte value. Enumerates all objects matching
 * the ID, filters by type and flags, then sets byte at offset 0x614
 * on each matching object's sub-object.
 *
 * __cdecl, void return.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_00566C80(void);
extern int __cdecl FUN_0064E600(int obj);
extern int __cdecl FUN_0064E540(int obj);
extern int __cdecl FUN_0064E100(void);
extern int __cdecl FUN_004FCB30(int id);
extern int __cdecl FUN_00415230(int this, int param);
extern int __cdecl FUN_00580E40(int id, void *buf);
extern int __cdecl FUN_00581370(int *buf, void *val);
extern int __cdecl FUN_00580FB0(int *buf, void *val, int count);
extern void __cdecl FUN_004084E0(void *ptr);

/* extern data symbols for absolute-address loads */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f23b0;

__declspec(naked) void __cdecl FUN_00578A80(unsigned int param_1, char param_2)
{
    __asm {
        sub     esp, 0xc
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0x0c], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        jz      l_normal_path
        lea     eax, [esp + 0x0c]
        push    eax
        add     esi, 0xff100000
        push    esi
        call    FUN_00580E40
        add     esp, 8
        jmp     l_post_enumerate
l_normal_path:
        call    FUN_00566C80
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call    FUN_0064E600
        test    al, al
        jz      l_post_enumerate
        push    esi
        mov     ecx, edi
        call    FUN_0064E540
        mov     ebp, eax
        mov     ecx, ebp
        call    FUN_0064E100
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call    FUN_0064E100
        cmp     edi, dword ptr [eax + 4]
        jz      l_post_enumerate
l_enum_loop:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004FCB30
        mov     esi, eax
        test    esi, esi
        jz      l_enum_next
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     l_enum_next
        mov     eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_enum_next
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      l_enum_next
        mov     eax, dword ptr [DAT_007f23b0]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_enum_next
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     l_enum_next
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], esi
        jz      l_grow_buffer
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call    FUN_00581370
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 8
        add     eax, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     l_enum_next
l_grow_buffer:
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00580FB0
l_enum_next:
        mov     ecx, ebp
        add     edi, 4
        call    FUN_0064E100
        cmp     edi, dword ptr [eax + 4]
        jnz     l_enum_loop
l_post_enumerate:
        mov     eax, dword ptr [esp + 0x0c]
        cmp     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        jz      l_free
        mov     cl, byte ptr [esp + 0x14]
l_set_loop:
        mov     edx, dword ptr [eax]
        mov     byte ptr [edx + 0x614], cl
        mov     edx, dword ptr [esp + 0x04]
        add     eax, 4
        cmp     eax, edx
        jnz     l_set_loop
        /* __emit: mov eax,[esp] — MSVC6 emits 8B 04 24 (3B); ref uses 8B 44 24 00 (4B) */
        __emit  0x8B
        __emit  0x44
        __emit  0x24
        __emit  0x00
l_free:
        test    eax, eax
        jz      l_done
        push    eax
        call    FUN_004084E0
        add     esp, 4
l_done:
        add     esp, 0xc
        ret
    }
}
