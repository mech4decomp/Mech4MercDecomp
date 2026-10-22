/*
 * MW4 Mercenaries decompilation
 * Function: func_005547e0
 * VA: 0x005547E0
 * Size: 100 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_005547e0(void)
{
    

extern void __cdecl FUN_0061acc8(void);
extern void __cdecl FUN_0061acf1(void);
extern void __cdecl FUN_10054c47a(void);
__asm {
push esi
        mov  esi, ecx
        mov  eax, [esi+0x384]
        mov  ecx, [eax+0x10]
        shr  ecx, 0x13
        test cl, 1
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
        mov  edx, [esp+8]
        mov  eax, [edx+0x10]
        test eax, eax
        jle  done
        mov  ecx, [esi+0xE0]
        mov  eax, [ecx]
        push 0
        push 2
        call dword ptr [eax+4]
        push 2
        mov  ecx, esi
        call FUN_10054c47a
done:
        pop  esi
        ret  4
    }


}
