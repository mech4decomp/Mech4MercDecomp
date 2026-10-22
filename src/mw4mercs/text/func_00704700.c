/* FUN_00704700 - gosScript query (alloc + dispatch) */

extern unsigned int g_85b4a0; /* 0x0085b4a0 */
extern char g_87bc35;      /* 0x0087bc35 */

extern int __cdecl FUN_0070e220(void);
extern int __cdecl FUN_00703e60(void);
extern int __cdecl FUN_0070e1b0(void);

__declspec(naked) unsigned int __cdecl FUN_00704700(void)
{
    __asm {
        mov eax, dword ptr [g_85b4a0]
        push ebx
        xor bl, bl
        cmp eax, 1
        jnz loc_704727
        mov al, byte ptr [g_87bc35]
        test al, al
        jnz loc_704748
        push 0xa
        push 0x1
        call FUN_0070e220
        neg eax
        sbb eax, eax
        neg eax
        pop ebx
        ret
loc_704727:
        call FUN_00703e60
        mov bl, al
        mov al, byte ptr [g_87bc35]
        test al, al
        jnz loc_704748
        xor eax, eax
        test bl, bl
        setnz al
        push 0xa
        push 0x1
        push eax
        call FUN_0070e1b0
loc_704748:
        mov al, bl
        pop ebx
        ret
    }
}
