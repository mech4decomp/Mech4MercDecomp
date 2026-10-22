/*
 * FUN_006531C0 (525 B) — __cdecl (4 stack params). Grows a vector (param_4)
 * to hold param_3 entries, then iterates param_2's array, filtering via
 * FUN_0041fd80 and appending matches. Uses FUN_004084d0/004084e0 (alloc/
 * free), FUN_005cc090/005805a0/005809b0 (vector ops), and a virtual call
 * (call [edx+0x138]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005cc090(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005809b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __cdecl FUN_006531c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x2fc]
        sub     esp, 0x10
        test    ecx, ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      L_531ec
        mov     ebp, dword ptr [esp + 0x30]
        mov     edx, dword ptr [ecx]
        push    ebp
        call    dword ptr [edx + 0x138]
        cmp     al, 0x1
        jz      L_533c5
        jmp     L_531f0
L_531ec:
        mov     ebp, dword ptr [esp + 0x30]
L_531f0:
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        jz      L_533c5
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [ebp]
        mov     ecx, esi
        sub     ecx, ebx
        sar     ecx, 0x2
        cmp     ecx, eax
        jnc     L_53284
        mov     ecx, dword ptr [ebp + 0x4]
        sub     ecx, ebx
        sar     ecx, 0x2
        test    ebx, ebx
        __emit 0x8D   /* __emit: MSVC6 emits 6-byte no-base SIB lea (drops disp byte); ref needs 8D 3C 85 00 00 00 00 */
        __emit 0x3C
        __emit 0x85
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x10], ecx
        push    edi
        jz      L_53264
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x34]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x34]
        mov     eax, dword ptr [eax + 0x4]
        push    edx
        push    ebp
        push    eax
        push    ebx
        call    FUN_005cc090
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [ecx]
        sub     esi, eax
        add     esp, 0x14
        sar     esi, 0x2
        push    esi
        push    eax
        add     ecx, 0x8
        mov     ebx, ebp
        mov     dword ptr [esp + 0x20], eax
        call    FUN_005805a0
        mov     ebp, dword ptr [esp + 0x30]
        jmp     L_5326e
L_53264:
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
L_5326e:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x2c]
        lea     edx, [ebx + ecx*0x4]
        add     edi, ebx
        mov     dword ptr [ebp], ebx
        mov     dword ptr [ebp + 0x4], edx
        mov     dword ptr [ebp + 0x8], edi
L_53284:
        test    eax, eax
        jle     L_533c5
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x10], eax
L_53298:
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_533ab
        lea     esi, [eax + 0x10]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_533ab
        mov     ecx, esi
        call    FUN_0041fd80
        cmp     eax, dword ptr [esp + 0x24]
        jz      L_533ab
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, dword ptr [ebp + 0x4]
        cmp     esi, dword ptr [ebp + 0x8]
        mov     dword ptr [esp + 0x18], eax
        jz      L_532ed
        test    esi, esi
        jz      L_532e2
        mov     dword ptr [esi], eax
L_532e2:
        add     esi, 0x4
        mov     dword ptr [ebp + 0x4], esi
        jmp     L_533ab
L_532ed:
        mov     ebx, dword ptr [ebp]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x2c], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x2c]
        jc      L_53310
        lea     ecx, [esp + 0x14]
L_53310:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_53330
        __emit 0x8D   /* __emit: MSVC6 emits 6-byte no-base SIB lea (drops disp byte); ref needs 8D 04 8D 00 00 00 00 */
        __emit 0x04
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x2c], eax
        jmp     L_53338
L_53330:
        mov     dword ptr [esp + 0x2c], 0x0
L_53338:
        cmp     ebx, esi
        mov     edi, dword ptr [esp + 0x2c]
        jz      L_53356
        mov     ebp, ebx
L_53342:
        push    ebp
        push    edi
        call    FUN_005809b0
        add     ebp, 0x4
        add     esp, 0x8
        add     edi, 0x4
        cmp     ebp, esi
        jnz     L_53342
L_53356:
        test    edi, edi
        jz      L_53360
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [edi], ecx
L_53360:
        cmp     esi, esi
        lea     ebp, [edi + 0x4]
        jz      L_5337d
        mov     edi, esi
L_53369:
        push    edi
        push    ebp
        call    FUN_005809b0
        add     edi, 0x4
        add     esp, 0x8
        add     ebp, 0x4
        cmp     edi, esi
        jnz     L_53369
L_5337d:
        test    ebx, ebx
        mov     dword ptr [esp + 0x1c], ebx
        jz      L_5338e
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_5338e:
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ebp
        mov     ebp, dword ptr [esp + 0x30]
        lea     ecx, [ecx + edx*0x4]
        add     eax, 0x8
        mov     dword ptr [eax], ecx
L_533ab:
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x10]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x10], eax
        jnz     L_53298
L_533c5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
