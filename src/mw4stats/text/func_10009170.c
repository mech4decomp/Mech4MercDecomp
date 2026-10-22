/* FUN_10009170 - __thiscall, ECX=this, param_1=[esp+4] */

extern void __cdecl FUN_10009190(void);
extern void *g_free;   /* IAT slot 0x100210ec (free) */

void __declspec(naked) FUN_10009170(void)
{
    __asm {
        push esi
        mov  esi, ecx
        call FUN_10009190
        test byte ptr [esp + 0x8], 0x1
        jz   L_9189
        push esi
        call dword ptr [g_free]
        add  esp, 0x4
L_9189:
        mov  eax, esi
        pop  esi
        ret  0x4
    }
}
