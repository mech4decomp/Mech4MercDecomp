/*
 * FUN_007620A0 (367 B) — __cdecl (RET 0, 6 stack params via ebp frame).
 *
 * In-.text data block at 0x7620A0 (368 B). Function body interleaved with
 * embedded data: each `EB 04` skips a 4-byte `D6 D6 3C 00` data blob, and
 * runs of `EB 00` (jmp-to-next, 2-byte NOPs) pad between code islands.
 * Calls 0x7611a0; on failure returns 0x51, else writes vtable pointers
 * 0x762210/0x762340 into out-params and returns 0x50. Trailing nop excluded.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007611a0(void);

__declspec(naked) void __cdecl FUN_007620A0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        jmp     j_a9
        __emit 0xD6          /* data blob (skipped by EB 04) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
j_a9:
        jmp     j_ab
j_ab:
        jmp     j_ad
j_ad:
        jmp     j_af
j_af:
        jmp     j_b1
j_b1:
        jmp     j_b3
j_b3:
        jmp     j_b5
j_b5:
        jmp     j_b7
j_b7:
        jmp     j_b9
j_b9:
        jmp     j_bb
j_bb:
        jmp     j_bd
j_bd:
        jmp     j_bf
j_bf:
        jmp     j_c1
j_c1:
        jmp     j_c3
j_c3:
        jmp     j_c5
j_c5:
        jmp     j_c7
j_c7:
        jmp     j_c9
j_c9:
        jmp     j_cb
j_cb:
        jmp     j_cd
j_cd:
        jmp     j_cf
j_cf:
        jmp     j_d1
j_d1:
        jmp     j_d3
j_d3:
        jmp     j_d5
j_d5:
        jmp     j_d7
j_d7:
        jmp     j_d9
j_d9:
        jmp     j_db
j_db:
        jmp     j_dd
j_dd:
        jmp     j_df
j_df:
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    0
        call    FUN_007611a0
        add     esp, 8
        jmp     j_f3
        __emit 0xD6          /* data blob (skipped by EB 04) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
j_f3:
        jmp     j_f5
j_f5:
        jmp     j_f7
j_f7:
        jmp     j_f9
j_f9:
        jmp     j_fb
j_fb:
        jmp     j_fd
j_fd:
        jmp     j_ff
j_ff:
        jmp     j_101
j_101:
        jmp     j_103
j_103:
        jmp     j_105
j_105:
        jmp     j_107
j_107:
        jmp     j_109
j_109:
        jmp     j_10b
j_10b:
        jmp     j_10d
j_10d:
        jmp     j_10f
j_10f:
        jmp     j_111
j_111:
        jmp     j_113
j_113:
        jmp     j_115
j_115:
        jmp     j_117
j_117:
        jmp     j_119
j_119:
        jmp     j_11b
j_11b:
        jmp     j_11d
j_11d:
        jmp     j_11f
j_11f:
        jmp     j_121
j_121:
        jmp     j_123
j_123:
        jmp     j_125
j_125:
        jmp     j_127
j_127:
        jmp     j_129
j_129:
        test    eax, eax
        jne     j_134
        mov     eax, 0x51
        pop     ebp
        ret
j_134:
        jmp     j_13a
        __emit 0xD6          /* data blob (skipped by EB 04) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
j_13a:
        jmp     j_13c
j_13c:
        jmp     j_13e
j_13e:
        jmp     j_140
j_140:
        jmp     j_142
j_142:
        jmp     j_144
j_144:
        jmp     j_146
j_146:
        jmp     j_148
j_148:
        jmp     j_14a
j_14a:
        jmp     j_14c
j_14c:
        jmp     j_14e
j_14e:
        jmp     j_150
j_150:
        jmp     j_152
j_152:
        jmp     j_154
j_154:
        jmp     j_156
j_156:
        jmp     j_158
j_158:
        jmp     j_15a
j_15a:
        jmp     j_15c
j_15c:
        jmp     j_15e
j_15e:
        jmp     j_160
j_160:
        jmp     j_162
j_162:
        jmp     j_164
j_164:
        jmp     j_166
j_166:
        jmp     j_168
j_168:
        jmp     j_16a
j_16a:
        jmp     j_16c
j_16c:
        jmp     j_16e
j_16e:
        jmp     j_170
j_170:
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [eax + 0x110], ecx
        mov     ecx, dword ptr [ebp + 0x14]
        mov     dword ptr [edx], 0x762210
        mov     dword ptr [ecx], 0x762340
        jmp     j_191
        __emit 0xD6          /* data blob (skipped by EB 04) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
j_191:
        jmp     j_193
j_193:
        jmp     j_195
j_195:
        jmp     j_197
j_197:
        jmp     j_199
j_199:
        jmp     j_19b
j_19b:
        jmp     j_19d
j_19d:
        jmp     j_19f
j_19f:
        jmp     j_1a1
j_1a1:
        jmp     j_1a3
j_1a3:
        jmp     j_1a5
j_1a5:
        jmp     j_1a7
j_1a7:
        jmp     j_1a9
j_1a9:
        jmp     j_1ab
j_1ab:
        jmp     j_1ad
j_1ad:
        jmp     j_1af
j_1af:
        jmp     j_1b1
j_1b1:
        jmp     j_1b3
j_1b3:
        jmp     j_1b5
j_1b5:
        jmp     j_1b7
j_1b7:
        jmp     j_1b9
j_1b9:
        jmp     j_1bb
j_1bb:
        jmp     j_1bd
j_1bd:
        jmp     j_1bf
j_1bf:
        jmp     j_1c1
j_1c1:
        jmp     j_1c3
j_1c3:
        jmp     j_1c5
j_1c5:
        jmp     j_1c7
j_1c7:
        mov     edx, dword ptr [ebp + 0x18]
        mov     dword ptr [edx], eax
        jmp     j_1d2
        __emit 0xD6          /* data blob (skipped by EB 04) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
j_1d2:
        jmp     j_1d4
j_1d4:
        jmp     j_1d6
j_1d6:
        jmp     j_1d8
j_1d8:
        jmp     j_1da
j_1da:
        jmp     j_1dc
j_1dc:
        jmp     j_1de
j_1de:
        jmp     j_1e0
j_1e0:
        jmp     j_1e2
j_1e2:
        jmp     j_1e4
j_1e4:
        jmp     j_1e6
j_1e6:
        jmp     j_1e8
j_1e8:
        jmp     j_1ea
j_1ea:
        jmp     j_1ec
j_1ec:
        jmp     j_1ee
j_1ee:
        jmp     j_1f0
j_1f0:
        jmp     j_1f2
j_1f2:
        jmp     j_1f4
j_1f4:
        jmp     j_1f6
j_1f6:
        jmp     j_1f8
j_1f8:
        jmp     j_1fa
j_1fa:
        jmp     j_1fc
j_1fc:
        jmp     j_1fe
j_1fe:
        jmp     j_200
j_200:
        jmp     j_202
j_202:
        jmp     j_204
j_204:
        jmp     j_206
j_206:
        jmp     j_208
j_208:
        mov     eax, 0x50
        pop     ebp
        ret
    }
}
