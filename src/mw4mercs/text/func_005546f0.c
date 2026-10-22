/*
 * MW4 Mercenaries decompilation
 * Function: func_005546f0
 * VA: 0x005546F0
 * Size: 117 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_005546f0(void)
{
    extern void __cdecl FUN_0061acf0(void);
    extern void __cdecl FUN_0061ad20(void);
    extern void __cdecl FUN_00559be0(void);
    extern void __cdecl FUN_0054c4d0(void);
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
        call FUN_0061acf0
        mov  ecx, eax
        call FUN_0061ad20
        test al, al
        je   done
        mov  ecx, [esp+0xC]
        mov  eax, [ecx+0x10]
        test eax, eax
        jle  done
        mov  edx, [esi+0xE0]
        cmp  dword ptr [edx+0x14], 7
        je   done
        mov  al, [edi+0x2F8]
        test al, al
        jne  done
        push 9
        mov  ecx, esi
        call FUN_00559be0
        push 1
        mov  ecx, esi
        call FUN_0054c4d0
done:
        pop  edi
        pop  esi
        ret  4
    }
}
