/*
 * FUN_005f6b70 (212 B) — Time-based update; recomputes grid coordinates
 * and rebuilds a node list.
 *
 * __fastcall (ECX = this).
 *
 * Uses absolute FPU memory refs DAT_0078a320 (double) / DAT_00786dd8 (float).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double DAT_0078a320;
extern float DAT_00786dd8;
extern double __stdcall FUN_00707e70(int param);
extern int FUN_0075db4a(void);
extern int __fastcall FUN_005f6b40(void *param);
extern void __fastcall FUN_005f6ab0(void *param);
extern void __fastcall FUN_005f6a20(void *param);

__declspec(naked) void __fastcall FUN_005f6b70(void *param)
{
    
__asm {
sub     esp, 0x8
        fld     qword ptr [DAT_0078a320]
        push    ebx
        push    esi
        mov     ebx, ecx
        fadd    qword ptr [ebx + 0x4fc]
        push    edi
        push    0x0
        fstp    qword ptr [esp + 0x10]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0xc]
        fnstsw ax
        test    ah, 0x1
        jnz     done
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [ebx + 0x4fc]
        mov     ecx, ebx
        call    FUN_005f6b40
        test    eax, eax
        jz      done
        mov     edi, dword ptr [ebx + 0xd8]
        fld     dword ptr [edi + 0x8c]
        add     edi, 0x80
        fadd    dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x2c]
        fadd    dword ptr [DAT_00786dd8]
        mov     esi, eax
        sar     esi, 0x8
        call    FUN_0075db4a
        mov     edi, eax
        sar     edi, 0x8
        test    esi, esi
        jge     clamp_x_hi
        xor     esi, esi
        jmp     clamp_y
clamp_x_hi:
        cmp     esi, 0x13
        jle     clamp_y
        mov     esi, 0x13
clamp_y:
        test    edi, edi
        jge     clamp_y_hi
        xor     edi, edi
        jmp     compare
clamp_y_hi:
        cmp     edi, 0x13
        jle     compare
        mov     edi, 0x13
compare:
        cmp     esi, dword ptr [ebx + 0x4f4]
        jnz     rebuild
        cmp     edi, dword ptr [ebx + 0x4f8]
        jz      done
rebuild:
        mov     ecx, ebx
        call    FUN_005f6ab0
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x4f4], esi
        mov     dword ptr [ebx + 0x4f8], edi
        call    FUN_005f6a20
done:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret
    }

}
