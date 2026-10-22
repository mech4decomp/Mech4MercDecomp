/*
 * FUN_0051ED70 (82 B) — Cleanup/reset function
 * Frees array elements and resets counters in a large structure
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0051ed70(void)
{
    

extern void __cdecl FUN_1004084c8(void);
__asm {
push ebx
        push ebp
        push edi
        mov  edi, ecx
        mov  eax, [edi+0x40D98]
        xor  ebp, ebp
        xor  ebx, ebx
        cmp  eax, ebp
        jle  done
        push esi
        lea  esi, [edi+0x40D30]
loop_start:
        mov  eax, [esi]
        push eax
        call FUN_1004084c8
        add  esp, 4
        mov  [esi], ebp
        mov  eax, [edi+0x40D98]
        inc  ebx
        add  esi, 4
        cmp  ebx, eax
        jl   loop_start
        pop  esi
done:
        mov  [edi+0x40D98], ebp
        mov  [edi+0x40D94], ebp
        mov  [edi+0x40D9C], ebp
        mov  [edi+0x40DA0], ebp
        pop  edi
        pop  ebp
        pop  ebx
        ret
    }


}
