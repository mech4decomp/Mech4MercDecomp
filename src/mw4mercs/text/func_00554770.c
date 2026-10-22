/*
 * MW4 Mercenaries decompilation
 * Function: func_00554770
 * VA: 0x00554770
 * Size: 104 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_00554770(void)
{
    

extern void __cdecl FUN_0061acc8(void);
extern void __cdecl FUN_0061acf1(void);
extern void __cdecl FUN_00559b90(void);
extern void __cdecl FUN_10054c477(void);
__asm {
push esi
        mov  esi, ecx
        push edi
        mov  edi, [esi+0x384]
        mov  eax, [edi+0x10]
        shr  eax, 0x13
        test al, 1
        jne  done
        mov  al, [esi+0x589]
        test al, al
        jne  done
        mov  al, [esi+0x5AC]
        test al, al
        jne  done
        push 0x8000
        call FUN_0061acc8
        mov  ecx, eax
        call FUN_0061acf1
        test al, al
        je   done
        mov  ecx, [esp+0xC]
        mov  eax, [ecx+0x10]
        test eax, eax
        jle  done
        cmp  byte ptr [edi+0x2F8], 1
        jne  done
        push 0xA
        mov  ecx, esi
        call FUN_00559b90
        push 1
        mov  ecx, esi
        call FUN_10054c477
done:
        pop  edi
        pop  esi
        ret  4
    }


}
