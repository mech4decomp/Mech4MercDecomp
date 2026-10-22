/*
 * MW4 Mercenaries decompilation
 * Function: func_00554b90
 * VA: 0x00554B90
 * Size: 90 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_00554b90(void)
{
    

extern void __cdecl FUN_0061acc8(void);
extern void __cdecl FUN_0061acf1(void);
extern void __cdecl FUN_100553c14(void);
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
        mov  eax, [esi+0x8E0]
        push eax
        mov  ecx, esi
        call FUN_100553c14
done:
        pop  esi
        ret  4
    }


}
