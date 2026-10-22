/* FUN_005fb500 - __thiscall debug/log: prints armor + internal structure
   stats (base/current values, mode) via log subsystem + sprintf. */

extern void __cdecl FUN_00416bc0(void);
extern int  __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_005cbd00(void);
extern void __cdecl FUN_005cbf80(void);
extern char *__cdecl FUN_004e7fb0(void);
extern char *__cdecl FUN_004e7e00(void);
extern void __cdecl FUN_00416c60(void);

extern void *g_76b420;      /* sprintf function pointer */

extern int g_783f04;        /* vtable ptr */
extern int g_783ec4;        /* vtable ptr */
extern char g_78ad1c[];     /* "\nARMOR\n" */
extern char g_78ad00[];     /* "base: %.2f current: %.2f\n" */
extern char g_78acf4[];     /* "\nINTERNAL\n" */
extern char g_78ace8[];     /* "Mode: %s\n" */

__declspec(naked) void func_005fb500(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0xfffffff8
        sub esp, 0x7c
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea eax, [esi + 0x384]
        push eax
        lea ecx, [esp + 0x28]
        call FUN_00416bc0
        add esi, 0x370
        push esi
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x28], offset g_783f04
        call FUN_00416bc0
        mov ecx, dword ptr [esp + 0xc]
        mov ebx, dword ptr [ebp + 0x8]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78ad1c
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ad1c
        push ecx
        push offset g_78ad1c
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], offset g_783ec4
        call FUN_005cbd00
        lea ecx, [esp + 0x10]
        call FUN_00416cc0
        mov esi, eax
        test esi, esi
        jz L_5fb5ef
L_5fb577:
        mov edx, dword ptr [esi + 0x30]
        mov eax, dword ptr [esp + 0xc]
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        mov ecx, ebx
        call FUN_005cbf80
        sub esp, 0x8
        fld dword ptr [esi + 0x14]
        sub esp, 0x8
        fstp qword ptr [esp + 0x8]
        lea ecx, [esp + 0x48]
        fld dword ptr [esi + 0x10]
        fstp qword ptr [esp]
        push offset g_78ad00
        push ecx
        call dword ptr [g_76b420]
        mov edx, dword ptr [esp + 0x24]
        or ecx, 0xffffffff
        add esp, 0x18
        xor eax, eax
        lea edi, [esp + 0x38]
        repne scasb
        not ecx
        dec ecx
        lea eax, [esp + ecx + 0x38]
        push edx
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, ebx
        call FUN_005cbf80
        lea ecx, [esp + 0x10]
        call FUN_00416cc0
        mov esi, eax
        test esi, esi
        jnz L_5fb577
L_5fb5ef:
        mov edx, dword ptr [esp + 0xc]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78acf4
        repne scasb
        not ecx
        dec ecx
        push edx
        add ecx, offset g_78acf4
        push ecx
        push offset g_78acf4
        mov ecx, ebx
        call FUN_005cbf80
        lea ecx, [esp + 0x24]
        call FUN_00416cc0
        mov esi, eax
        test esi, esi
        jz L_5fb6f1
L_5fb629:
        mov eax, dword ptr [esi + 0x3c]
        push eax
        call FUN_004e7fb0
        mov ecx, dword ptr [esp + 0x10]
        add esp, 0x4
        push ecx
        mov edx, eax
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        mov ecx, ebx
        call FUN_005cbf80
        mov edx, dword ptr [esi + 0x38]
        push edx
        call FUN_004e7e00
        push eax
        lea eax, [esp + 0x40]
        push offset g_78ace8
        push eax
        call dword ptr [g_76b420]
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0x10
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0x3c]
        repne scasb
        not ecx
        dec ecx
        lea edx, [esp + ecx + 0x3c]
        push edx
        lea eax, [esp + 0x40]
        push eax
        mov ecx, ebx
        call FUN_005cbf80
        sub esp, 0x8
        fld dword ptr [esi + 0x14]
        sub esp, 0x8
        fstp qword ptr [esp + 0x8]
        lea ecx, [esp + 0x48]
        fld dword ptr [esi + 0x10]
        fstp qword ptr [esp]
        push offset g_78ad00
        push ecx
        call dword ptr [g_76b420]
        mov edx, dword ptr [esp + 0x24]
        or ecx, 0xffffffff
        add esp, 0x18
        xor eax, eax
        lea edi, [esp + 0x38]
        repne scasb
        not ecx
        dec ecx
        lea eax, [esp + ecx + 0x38]
        push edx
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, ebx
        call FUN_005cbf80
        lea ecx, [esp + 0x24]
        call FUN_00416cc0
        mov esi, eax
        test esi, esi
        jnz L_5fb629
L_5fb6f1:
        lea ecx, [esp + 0x10]
        call FUN_00416c60
        lea ecx, [esp + 0x24]
        call FUN_00416c60
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}
