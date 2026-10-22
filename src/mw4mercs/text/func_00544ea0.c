/*
 * MW4 Mercenaries decompilation
 * Function: func_00544ea0
 * VA: 0x00544EA0
 * Size: 100 bytes
 * Calling convention: __stdcall
 */

__declspec(naked) void __stdcall func_00544ea0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041fd56(void);
extern int DAT_007f2524;
extern int DAT_00000004;
extern void __cdecl FUN_1004151ef(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  ecx, [eax]
        push edi
        xor ecx, dword ptr [DAT_007dab40]
        mov  eax, [ecx+0x10]
        xor  eax, 0x85739531
        mov  ecx, [eax+0x8C]
        test ecx, ecx
        jle  done
        push ebx
        push esi
        mov  esi, [eax+0x88]
        add  esi, 0x14
        mov  ebx, ecx
loop_start:
        mov  ecx, [esi]
        call FUN_10041fd56
        mov  edi, eax
        test edi, edi
        jne  check_result
        mov eax, dword ptr [DAT_007f2524]
        __emit 0x8B  /* __emit: mov ecx, dword ptr [0x4] = 8B 0D 04 00 00 00; MSVC6 rejects mov reg,[imm32] as immediate load */
        __emit 0x0D
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push eax
        call FUN_1004151ef
        cmp  al, 1
        jne  next_iter
check_result:
        mov  edx, [edi]
        push 0
        mov  ecx, edi
        call dword ptr [edx+0x14]
next_iter:
        add  esi, 0x1C
        dec  ebx
        jne  loop_start
        pop  esi
        pop  ebx
done:
        pop  edi
        ret  8
    }


}
