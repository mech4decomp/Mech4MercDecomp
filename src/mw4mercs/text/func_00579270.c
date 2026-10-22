/*
 * FUN_00579270 (354 B) — Enumerates objects matching an ID and calls
 * a virtual method on each.
 *
 * Takes an object ID. Enumerates all objects matching the ID, filters
 * by type and flags, then calls vtable method at offset 0x128 on each
 * matching object's sub-object.
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
extern int __cdecl FUN_00580BE0(int id, void *buf);
extern int __cdecl FUN_00580D50(int *buf, void *val, int count);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void __cdecl FUN_00579270(unsigned int param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f24d8;
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
        call    FUN_00580BE0
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
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
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
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_enum_next
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      l_enum_next
        mov eax, dword ptr [DAT_007f24d8]
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
        test    eax, eax
        jz      l_store_skip
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [esp + 0x10]
l_store_skip:
        add     eax, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     l_enum_next
l_grow_buffer:
        push    1
        lea     ecx, [esp + 0x20]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00580D50
l_enum_next:
        mov     ecx, ebp
        add     edi, 4
        call    FUN_0064E100
        cmp     edi, dword ptr [eax + 4]
        jnz     l_enum_loop
l_post_enumerate:
        mov     esi, dword ptr [esp + 0x0c]
        cmp     esi, dword ptr [esp + 0x10]
        jz      l_free
l_call_loop:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x128]
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     l_call_loop
        mov     esi, dword ptr [esp + 0x0c]
l_free:
        test    esi, esi
        jz      l_done
        push    esi
        call    FUN_004084E0
        add     esp, 4
l_done:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret
    }


}
